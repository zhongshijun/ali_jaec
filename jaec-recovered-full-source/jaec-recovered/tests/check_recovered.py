"""Streaming/API checks and empirical PCM equivalence, not a quality benchmark."""
import argparse
import ctypes as C
import hashlib
import json
import sys
import time
from pathlib import Path

import numpy as np

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
from tools.native_oracle import Frontend, fixtures, PCM
from tools.original_introspection import original
from tools.process_wav import read_wav, write_wav


def extended_fixtures():
    cases = fixtures()
    rng = np.random.default_rng(1092026)
    n = 12*16000
    near = rng.integers(-3000, 3001, n, dtype=np.int16)
    ref = rng.integers(-11000, 11001, n, dtype=np.int16)
    ref[2*16000:7*16000] = 0  # exceeds the 300-frame activity hold
    echo = .65*np.roll(ref.astype(float), 720)
    echo[:720] = 0
    mic = np.clip(np.rint(echo+near), -32768, 32767).astype(np.int16)
    cases["reference_stops_and_restarts_12s"] = (mic, ref)
    m = rng.integers(-32768, 32768, 6*16000, dtype=np.int16)
    r = rng.integers(-32768, 32768, 6*16000, dtype=np.int16)
    # Exercise both rails, dense unrelated signals, and the output limiter.
    m[::7] = -32768
    m[::11] = 32767
    r[::13] = -32768
    cases["full_scale_uncorrelated_6s"] = (m, r)
    cases["full_scale_near_only_6s"] = (m, np.zeros_like(m))
    tiny = rng.integers(-1, 2, 2*16000, dtype=np.int16)
    cases["one_lsb_signals_2s"] = (tiny, tiny[::-1].copy())
    sample_dir = ROOT/"analysis/example"
    if (sample_dir/"nearend_mic.wav").exists() and (sample_dir/"farend_speech.wav").exists():
        cases["official_speech_example_10s"] = (
            read_wav(sample_dir/"nearend_mic.wav"),
            read_wav(sample_dir/"farend_speech.wav"),
        )
    return cases


def errors(a, b):
    d = a.astype(np.float64)-b
    return {
        "max_abs_pcm": int(np.max(abs(d))),
        "rmse_pcm": float(np.sqrt(np.mean(d*d))),
        "identical_samples_percent": float(100*np.mean(d == 0)),
    }


def run(scalar=False):
    original(scalar=scalar)
    filename = "libjaec_scalar.so" if scalar else "libjaec_recovered.so"
    weights = ROOT/"original/tde_lp.bin"
    report = {
        "reference_mode": "scalar DSP" if scalar else "native CPU dispatch",
        "recovered_library": filename,
        "library_sha256": hashlib.sha256((ROOT/"build"/filename).read_bytes()).hexdigest(),
        "weights_sha256": hashlib.sha256(weights.read_bytes()).hexdigest(),
        "cases": {},
        "note": "Synthetic numerical stimuli; these results do not measure speech quality.",
    }
    for line in Path("/proc/cpuinfo").read_text().splitlines():
        if line.startswith("model name"):
            report["cpu"] = line.split(":", 1)[1].strip()
            break
    with Frontend(ROOT/"original/jaec_x86.so", weights) as a, \
         Frontend(ROOT/"build"/filename, weights) as b:
        for name, (mic, ref) in extended_fixtures().items():
            a.reset()
            b.reset()
            expected = a.process(mic, ref)
            start = time.perf_counter()
            actual = b.process(mic, ref)
            elapsed = time.perf_counter()-start
            b.reset()
            repeated = b.process(mic, ref, block=320)
            assert np.array_equal(actual, repeated), (name, "reset/chunk mismatch")
            item = errors(actual, expected)
            item.update({
                "samples": len(actual),
                "audio_seconds": len(actual)/16000,
                "recovered_process_seconds": elapsed,
                "real_time_factor": elapsed/(len(actual)/16000),
                "reset_and_chunk_exact": True,
            })
            report["cases"][name] = item
            if name == "official_speech_example_10s":
                suffix = "scalar" if scalar else "default"
                write_wav(ROOT/f"analysis/example/original_{suffix}.wav", expected)
                write_wav(ROOT/f"analysis/example/recovered_{suffix}.wav", actual)
                item["mic_pcm_sha256"] = hashlib.sha256(mic.tobytes()).hexdigest()
                item["ref_pcm_sha256"] = hashlib.sha256(ref.tobytes()).hexdigest()
            print(name, json.dumps(item), flush=True)
            # Small absolute PCM tolerances, independent of output amplitude.
            # AVX2 uses fused/reordered operations and a fused decoder, so its
            # numerical behavior is not expected to be bit-identical.
            if scalar:
                assert item["max_abs_pcm"] <= 2 and item["rmse_pcm"] < .2, item
            else:
                assert item["max_abs_pcm"] <= 16 and item["rmse_pcm"] < 2.0, item

        buf = np.full(160, 17, np.int16)
        ptr = buf.ctypes.data_as(PCM)
        for count in [-160, 0, 1, 159, 161]:
            assert b.lib.jaec_frontend_process(b.handle, ptr, ptr, count, ptr) == -1
            assert np.all(buf == 17), "invalid calls must not overwrite output"
        for bad in [
            (None, ptr, ptr, 160, ptr),
            (b.handle, None, ptr, 160, ptr),
            (b.handle, ptr, None, 160, ptr),
            (b.handle, ptr, ptr, 160, None),
        ]:
            assert b.lib.jaec_frontend_process(*bad) == -1
        assert b.error() == "invalid process arguments"
        b.lib.jaec_frontend_reset(None)
        b.lib.jaec_frontend_destroy(None)
        for path in [None, b"", b"/nonexistent-jaec-model"]:
            assert not b.lib.jaec_frontend_create(path)
        report["api_invalid_arguments_rejected"] = True

        # The input frame is copied into the rings before any PCM is emitted,
        # so exact in-place input/output aliasing is supported.
        mic, ref = fixtures(1)["double_talk"]
        b.reset()
        expected = b.process(mic, ref)
        b.reset()
        aliased = mic.copy()
        assert b.lib.jaec_frontend_process(
            b.handle, aliased.ctypes.data_as(PCM), ref.ctypes.data_as(PCM),
            len(mic), aliased.ctypes.data_as(PCM)) == 0
        assert np.array_equal(aliased, expected)
        report["in_place_mic_output_exact"] = True
        b.reset()
        aliased = ref.copy()
        assert b.lib.jaec_frontend_process(
            b.handle, mic.ctypes.data_as(PCM), aliased.ctypes.data_as(PCM),
            len(mic), aliased.ctypes.data_as(PCM)) == 0
        assert np.array_equal(aliased, expected)
        report["in_place_ref_output_exact"] = True

    suffix = "scalar" if scalar else "default"
    (ROOT/f"analysis/recovered-validation-{suffix}.json").write_text(
        json.dumps(report, indent=2)+"\n")
    return report


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--scalar", action="store_true")
    run(parser.parse_args().scalar)
