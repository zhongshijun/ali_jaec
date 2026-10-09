# Sources and third-party notices

The JAEC original binaries, model, README and license were obtained from the
public ModelScope repository `iic/speech_jaec_aec_16k`. Its accompanying
Apache-2.0 license is preserved in `LICENSE` and `original/LICENSE`.
The readable JAEC C implementation in this project is a reconstruction,
not an upstream source release. Original third-party notices are preserved
in `original/THIRD_PARTY_NOTICES.md`.

## Monocypher

`src/vendor/monocypher/monocypher.c` and `monocypher.h` are Monocypher 4.0.3,
matching the version identified in the original release's notices.
Source: `https://monocypher.org/`.
The complete upstream copyright and 2-clause BSD terms are retained in
the source files. No cryptographic algorithm was reimplemented here.

## PFFFT / FFTPACK

`src/vendor/pffft/` contains upstream PFFFT source from
`https://github.com/marton78/pffft`.
The upstream Git tree and every file's verified Git blob SHA-1 and SHA-256
are recorded in `src/vendor/pffft/PROVENANCE.json`.
The source files are unmodified. The complete upstream terms are retained
in their headers and `src/vendor/pffft/LICENSE.txt`.

PFFFT is based on FFTPACKv4 by Paul Swarztrauber, NCAR.
This dependency implements the FFT functionality identified in the binary;
the 512-point ordered real transform was compared against the original
binary on 24 random float32 frames with bit-identical results on the tested CPU.
This result does not identify the exact PFFFT source revision originally
used by the JAEC vendor.

## Example audio

The optional files `analysis/example/nearend_mic.wav` and
`analysis/example/farend_speech.wav` are the examples linked by the model's
original README:

```text
https://dashscope.oss-cn-beijing.aliyuncs.com/samples/audio/jaec/nearend_mic.wav
https://dashscope.oss-cn-beijing.aliyuncs.com/samples/audio/jaec/farend_speech.wav
```

They are used only as public example inputs for numerical comparison.
Generated outputs in the same directory are named `original_*` and
`recovered_*`. Input PCM hashes are included in the validation reports.
