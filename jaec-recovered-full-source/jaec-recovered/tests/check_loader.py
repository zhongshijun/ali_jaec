"""Compare the reconstructed loader with the original internal loader."""
import ctypes as C
import hashlib
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


class Model(C.Structure):
    _fields_ = [
        ("bytes", C.c_void_p),
        ("size", C.c_size_t),
        ("allocation", C.c_void_p),
    ]


original = C.CDLL(str(ROOT / "original/jaec_x86.so"))
base = C.cast(original.jaec_frontend_create, C.c_void_p).value - 0x2860
original_load = C.CFUNCTYPE(C.POINTER(Model), C.c_char_p)(base + 0x4db0)
original_free = C.CFUNCTYPE(None, C.POINTER(Model))(base + 0x5170)
rebuilt = C.CDLL(str(ROOT / "build/libjaec_loader.so"))
rebuilt.jaec_model_load.argtypes = [C.c_char_p]
rebuilt.jaec_model_load.restype = C.POINTER(Model)
rebuilt.jaec_model_free.argtypes = [C.POINTER(Model)]
rebuilt.jaec_model_free.restype = None
weights = bytes(ROOT / "original/tde_lp.bin")
a = original_load(weights)
b = rebuilt.jaec_model_load(weights)
assert a and b, "loader failed"
try:
    assert a.contents.size == b.contents.size
    original_bytes = C.string_at(a.contents.bytes, a.contents.size)
    rebuilt_bytes = C.string_at(b.contents.bytes, b.contents.size)
    assert original_bytes == rebuilt_bytes, "loaded model data differs"
    result = {
        "loaded_model_bytes": len(original_bytes),
        "all_bytes_equal": True,
        "sha256": hashlib.sha256(original_bytes).hexdigest(),
    }
    for bad_path in [None, b"", b"/nonexistent-jaec-file"]:
        assert not original_load(bad_path)
        assert not rebuilt.jaec_model_load(bad_path)
    result["invalid_paths_rejected"] = True
    (ROOT / "analysis/loader-validation.json").write_text(
        json.dumps(result, indent=2) + "\n"
    )
    print(json.dumps(result, indent=2))
finally:
    original_free(a)
    rebuilt.jaec_model_free(b)
