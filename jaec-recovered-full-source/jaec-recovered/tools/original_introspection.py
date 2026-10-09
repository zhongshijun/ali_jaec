"""Internal reference calls, strictly limited to the inspected original binary.

This module is test/analysis infrastructure. No recovered C code loads or calls
the original library. Changing dispatch affects only this Python process.
"""
import ctypes as C
import hashlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ORIGINAL_SHA256 = "854a09f4634d806daee2150409ad1921eae013589bab9568fefa1874678fd9e8"
FP = C.POINTER(C.c_float)


def original(scalar=False):
    path = ROOT / "original/jaec_x86.so"
    assert hashlib.sha256(path.read_bytes()).hexdigest() == ORIGINAL_SHA256
    lib = C.CDLL(str(path))
    base = C.cast(lib.jaec_frontend_create, C.c_void_p).value - 0x2860
    C.CFUNCTYPE(None)(base + 0x3410)()
    if scalar:
        # Same table written by RVA 0x3410 before its AVX2/FMA override.
        entries = (C.c_uint64 * 22).from_address(base + 0x1e080)
        for i in range(22):
            entries[i] = 0
        for offset, rva in {
            0x00: 0x8920, 0x08: 0x5b10, 0x28: 0x5c30, 0x30: 0x6900,
            0x50: 0x8b00, 0x60: 0x9170, 0x78: 0x9c20,
            0x88: 0x93c0, 0x90: 0x9830,
        }.items():
            entries[offset // 8] = base + rva
        entries[0x80 // 8] = 0x3020
    return lib, base


def floats(address, count):
    import numpy as np
    return np.ctypeslib.as_array((C.c_float * count).from_address(address))


def aligned(count):
    import numpy as np
    storage = np.zeros(count + 16, np.float32)
    start = (-storage.ctypes.data // 4) % 16
    return storage[start:start+count]
