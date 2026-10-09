"""Small ctypes harness for comparing JAEC native implementations."""

from __future__ import annotations

import argparse
import ctypes as C
import hashlib
import json
from pathlib import Path

import numpy as np

ROOT = Path(__file__).resolve().parents[1]
PCM = C.POINTER(C.c_int16)


class Frontend:
    def __init__(self, library: Path, weights: Path):
        self.lib = C.CDLL(str(library.resolve()))
        self.lib.jaec_frontend_create.argtypes = [C.c_char_p]
        self.lib.jaec_frontend_create.restype = C.c_void_p
        self.lib.jaec_frontend_destroy.argtypes = [C.c_void_p]
        self.lib.jaec_frontend_destroy.restype = None
        self.lib.jaec_frontend_reset.argtypes = [C.c_void_p]
        self.lib.jaec_frontend_reset.restype = None
        self.lib.jaec_frontend_process.argtypes = [
            C.c_void_p, PCM, PCM, C.c_int, PCM
        ]
        self.lib.jaec_frontend_process.restype = C.c_int
        self.lib.jaec_frontend_last_error.argtypes = []
        self.lib.jaec_frontend_last_error.restype = C.c_char_p
        self.handle = self.lib.jaec_frontend_create(bytes(weights.resolve()))
        if not self.handle:
            raise RuntimeError(self.error())

    def error(self):
        return (self.lib.jaec_frontend_last_error() or b"").decode(
            "utf-8", errors="replace"
        )

    def reset(self):
        self.lib.jaec_frontend_reset(self.handle)

    def process(self, mic, ref, block=160):
        mic = np.ascontiguousarray(mic, dtype=np.int16)
        ref = np.ascontiguousarray(ref, dtype=np.int16)
        if mic.ndim != 1 or ref.shape != mic.shape:
            raise ValueError("expected equal-length one-dimensional signals")
        if len(mic) % block or block % 160:
            raise ValueError("block must divide input and be a multiple of 160")
        out = np.empty_like(mic)
        for start in range(0, len(mic), block):
            status = self.lib.jaec_frontend_process(
                self.handle,
                mic[start:].ctypes.data_as(PCM),
                ref[start:].ctypes.data_as(PCM),
                block,
                out[start:].ctypes.data_as(PCM),
            )
            if status != 0:
                raise RuntimeError(f"native status={status}: {self.error()}")
        return out

    def close(self):
        if self.handle:
            self.lib.jaec_frontend_destroy(self.handle)
            self.handle = None

    def __enter__(self):
        return self

    def __exit__(self, *_):
        self.close()


def fixtures(seconds=6):
    """Deterministic numerical stimuli, not a speech-quality benchmark."""
    count = seconds * 16000
    rng = np.random.default_rng(20261009)
    t = np.arange(count) / 16000
    ref_float = (
        5500 * np.sin(2 * np.pi * 217 * t)
        + 2800 * np.sin(2 * np.pi * 613 * t)
        + rng.normal(0, 1700, count)
    )
    ref_float *= 0.65 + 0.35 * np.sin(2 * np.pi * 2.3 * t)
    ref = np.clip(np.rint(ref_float), -32768, 32767).astype(np.int16)
    near = (
        4200 * np.sin(2 * np.pi * 349 * t)
        + 1600 * np.sin(2 * np.pi * 929 * t)
    ) * (0.5 + 0.5 * np.sin(2 * np.pi * 3.7 * t))
    echo = np.zeros(count)
    for delay, gain in [(480, .62), (701, .19), (1131, -.08)]:
        echo[delay:] += gain * ref_float[:-delay]
    pcm = lambda x: np.clip(np.rint(x), -32768, 32767).astype(np.int16)
    zero = np.zeros(count, dtype=np.int16)
    impulse = zero.copy()
    impulse[1000] = 12000
    changed_echo = echo.copy()
    changed_echo[count // 2:] = np.roll(echo, 800)[count // 2:]
    return {
        "silence": (zero, zero.copy()),
        "near_impulse": (impulse, zero.copy()),
        "near_only": (pcm(near), zero.copy()),
        "far_only": (pcm(echo), ref),
        "double_talk": (pcm(echo + near), ref),
        "echo_path_change": (pcm(changed_echo + near), ref),
    }


def run(library: Path, weights: Path, output: Path):
    output.mkdir(parents=True, exist_ok=True)
    report = {"library": str(library.resolve()), "cases": {}}
    with Frontend(library, weights) as native:
        for name, (mic, ref) in fixtures().items():
            native.reset()
            result = native.process(mic, ref)
            native.reset()
            repeated = native.process(mic, ref, block=320)
            if not np.array_equal(result, repeated):
                raise AssertionError(f"{name}: reset or block-size consistency")
            np.savez_compressed(output / f"{name}.npz",
                                mic=mic, ref=ref, output=result)
            report["cases"][name] = {
                "samples": len(result),
                "sha256": hashlib.sha256(result.tobytes()).hexdigest(),
                "peak": int(np.max(np.abs(result.astype(np.int32)))),
                "rms": float(np.sqrt(np.mean(result.astype(float) ** 2))),
                "block_and_reset_exact": True,
            }
    (output / "report.json").write_text(json.dumps(report, indent=2) + "\n")
    return report


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--library", type=Path,
                        default=ROOT / "original/jaec_x86.so")
    parser.add_argument("--weights", type=Path,
                        default=ROOT / "original/tde_lp.bin")
    parser.add_argument("--output", type=Path,
                        default=ROOT / "analysis/oracle")
    args = parser.parse_args()
    print(json.dumps(run(args.library, args.weights, args.output), indent=2))
