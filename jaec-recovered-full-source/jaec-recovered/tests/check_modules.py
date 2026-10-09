"""Compare recovered FFT, TDE and LP states with the original scalar kernels."""
import ctypes as C
import json
import sys
from pathlib import Path

import numpy as np

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
from tools.original_introspection import original, floats, aligned
from tools.native_oracle import fixtures

VP = C.c_void_p
F = C.c_float


class Lp(C.Structure):
    _fields_ = [
        ("model", VP),
        ("hidden", (F*32)*64),
        ("filter_re", (F*264)*4), ("filter_im", (F*264)*4),
        ("ref_re", (F*264)*4), ("ref_im", (F*264)*4),
        ("error_re", F*264), ("error_im", F*264), ("ref_power", F*264),
        ("features", (F*257)*6), ("conv", (F*64)*6),
        ("step_size", F*264), ("decay", F*264),
        ("decoder1", (F*128)*32), ("decoder2", (F*257)*32),
        ("ring", C.c_int),
    ]


def bind(lib, name, ret, args):
    fn = getattr(lib, name)
    fn.restype = ret
    fn.argtypes = args
    return fn


def run():
    native, base = original(scalar=True)
    recovered = C.CDLL(str(ROOT/"build/libjaec_scalar.so"))
    model = bind(recovered, "jaec_model_load", VP, [C.c_char_p])(
        bytes(ROOT/"original/tde_lp.bin"))
    assert model
    native_new_fft = C.CFUNCTYPE(VP, C.c_int, C.c_int)(base+0xe250)
    native_fft = C.CFUNCTYPE(None, VP, VP, VP, VP, C.c_int)(base+0xf2a0)
    native_del_fft = C.CFUNCTYPE(None, VP)(base+0xe6b0)
    new_fft = bind(recovered, "pffft_new_setup", VP, [C.c_int, C.c_int])
    fft = bind(recovered, "pffft_transform_ordered", None,
               [VP, VP, VP, VP, C.c_int])
    a_fft, b_fft = native_new_fft(512, 0), new_fft(512, 0)
    x, a, b, inverse = [aligned(512) for _ in range(4)]
    rng = np.random.default_rng(102609)
    fft_error = roundtrip_error = 0.0
    for _ in range(24):
        x[:] = rng.normal(0, .2, 512)
        native_fft(a_fft, x.ctypes.data, a.ctypes.data, None, 0)
        fft(b_fft, x.ctypes.data, b.ctypes.data, None, 0)
        fft_error = max(fft_error, float(np.max(abs(a-b))))
        fft(b_fft, b.ctypes.data, inverse.ctypes.data, None, 1)
        roundtrip_error = max(roundtrip_error,
                              float(np.max(abs(inverse/512-x))))
    native_del_fft(a_fft)
    bind(recovered, "pffft_destroy_setup", None, [VP])(b_fft)
    assert fft_error < 2e-5, fft_error
    assert roundtrip_error < 1e-6, roundtrip_error

    new_tde = bind(recovered, "jaec_tde_create", VP, [VP])
    step_tde = bind(recovered, "jaec_tde_step", None, [VP]*4)
    native_new_tde = C.CFUNCTYPE(VP, VP)(base+0x51b0)
    native_tde = C.CFUNCTYPE(None, VP, VP, VP, VP)(base+0x54a0)
    ta, tb = native_new_tde(model), new_tde(model)
    new_lp = bind(recovered, "jaec_lp_create", VP, [VP])
    step_lp = bind(recovered, "jaec_lp_step", None, [VP]*4)
    native_new_lp = C.CFUNCTYPE(VP, VP)(base+0x72d0)
    native_lp = C.CFUNCTYPE(None, VP, VP, VP, VP)(base+0x8540)
    la, lb = native_new_lp(model), new_lp(model)
    assert ta and tb and la and lb
    pa, pb = np.zeros(100, np.float32), np.zeros(100, np.float32)
    oa, ob = np.zeros(514, np.float32), np.zeros(514, np.float32)
    tde_fields = {
        "magnitude_means": (0x50, 32),
        "magnitude_variances": (0xd0, 32),
        "correlation_features": (0x4e38, 16*104),
        "conv1": (0x6838, 24*104),
        "conv2": (0x8f38, 24*104),
        "gru_hidden": (0x4de0, 16),
        "probability": (0x4c50, 100),
    }
    lp_fields = {
        "hidden": (0x8ba0, 64*32),
        "filter_re": (0xaba0, 4*264), "filter_im": (0xbc20, 4*264),
        "ref_re": (0xcca0, 4*264), "ref_im": (0xdd20, 4*264),
        "error_re": (0xeda0, 257), "error_im": (0xf1c0, 257),
        "ref_power": (0xf5e0, 257), "features": (0xfa00, 6*257),
        "conv": (0x11220, 6*64),
        "step_size": (0x13e20, 257), "decay": (0x14240, 257),
    }
    errors = {"tde": {k: 0.0 for k in tde_fields},
              "lp": {k: 0.0 for k in lp_fields}, "lp_output": 0.0}
    mic, ref = fixtures(3)["double_talk"]
    def spectrum(pcm, end):
        frame = np.zeros(512)
        start = max(0, end-512)
        frame[512-(end-start):] = pcm[start:end] / 32768.0
        frame *= np.sqrt(.5-.5*np.cos(np.arange(512)*2*np.pi/512))
        return np.fft.rfft(frame).astype(np.complex64).view(np.float32)

    for end in range(160, 160*241, 160):
        r, m = spectrum(ref, end), spectrum(mic, end)
        native_tde(ta, r.ctypes.data, m.ctypes.data, pa.ctypes.data)
        step_tde(tb, r.ctypes.data, m.ctypes.data, pb.ctypes.data)
        native_lp(la, r.ctypes.data, m.ctypes.data, oa.ctypes.data)
        step_lp(lb, r.ctypes.data, m.ctypes.data, ob.ctypes.data)
        for name, (offset, count) in tde_fields.items():
            diff = float(np.max(abs(floats(ta+offset, count) -
                                   floats(tb+offset, count))))
            errors["tde"][name] = max(errors["tde"][name], diff)
        for name, (offset, count) in lp_fields.items():
            rebuilt_offset = getattr(Lp, name).offset
            diff = float(np.max(abs(floats(la+offset, count) -
                                   floats(lb+rebuilt_offset, count))))
            errors["lp"][name] = max(errors["lp"][name], diff)
        errors["lp_output"] = max(errors["lp_output"], float(np.max(abs(oa-ob))))
        assert np.isfinite(pa).all() and np.isfinite(pb).all()
        assert np.isfinite(oa).all() and np.isfinite(ob).all()

    report = {
        "reference": "original scalar dispatch, 240 consecutive spectral frames",
        "fft_24_random_frames_max_abs_error": fft_error,
        "fft_roundtrip_max_abs_error": roundtrip_error,
        "max_abs_errors": errors,
    }
    (ROOT/"analysis/module-validation.json").write_text(
        json.dumps(report, indent=2)+"\n")
    print(json.dumps(report, indent=2))
    assert errors["tde"]["probability"] < 1e-4
    assert max(errors["tde"].values()) < 5e-4
    assert max(errors["lp"].values()) < 5e-3
    assert errors["lp_output"] < 5e-4
    C.CFUNCTYPE(None, VP)(base+0x5280)(ta)
    C.CFUNCTYPE(None, VP)(base+0x8410)(la)
    libc = C.CDLL(None)
    bind(libc, "free", None, [VP])(tb)
    libc.free(lb)
    bind(recovered, "jaec_model_free", None, [VP])(model)
    return report


if __name__ == "__main__":
    run()
