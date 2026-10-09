"""Run the recovered frontend on two 16 kHz mono PCM16 WAV files."""
import argparse
import sys
import wave
from pathlib import Path

import numpy as np

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
from tools.native_oracle import Frontend


def read_wav(path):
    with wave.open(str(path), "rb") as wav:
        if (wav.getnchannels(), wav.getsampwidth(), wav.getframerate(),
                wav.getcomptype()) != (1, 2, 16000, "NONE"):
            raise ValueError(f"{path}: expected 16 kHz mono PCM16 WAV")
        return np.frombuffer(wav.readframes(wav.getnframes()), dtype="<i2").copy()


def write_wav(path, samples):
    with wave.open(str(path), "wb") as wav:
        wav.setnchannels(1)
        wav.setsampwidth(2)
        wav.setframerate(16000)
        wav.writeframes(np.asarray(samples, dtype="<i2").tobytes())


def process(mic, ref, library, weights):
    if len(mic) != len(ref):
        raise ValueError("mic and reference must have the same sample count")
    count = len(mic)
    if not count:
        raise ValueError("empty input")
    pad = (-count) % 160
    with Frontend(library, weights) as frontend:
        result = frontend.process(np.pad(mic, (0, pad)), np.pad(ref, (0, pad)))
    return result[:count]


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--mic", type=Path, required=True)
    parser.add_argument("--ref", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    parser.add_argument("--library", type=Path,
                        default=ROOT/"build/libjaec_recovered.so")
    parser.add_argument("--weights", type=Path, default=ROOT/"original/tde_lp.bin")
    args = parser.parse_args()
    if args.out.resolve() in {args.mic.resolve(), args.ref.resolve()}:
        parser.error("output must be different from the two input files")
    try:
        output = process(read_wav(args.mic), read_wav(args.ref),
                         args.library, args.weights)
        write_wav(args.out, output)
    except (ValueError, OSError, wave.Error) as error:
        parser.error(str(error))
    print(f"Wrote {len(output)} samples to {args.out}; native 352-sample delay retained.")
