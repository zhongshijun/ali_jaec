---
tasks:
- acoustic-echo-cancellation
widgets:
- task: acoustic-echo-cancellation
  inputs:
  - type: audio
    name: nearend_mic
    title: Microphone signal
    validator:
      max_size: 10M
  - type: audio
    name: farend_speech
    title: Far-end reference signal
    validator:
      max_size: 10M
  examples:
  - name: JAEC example
    title: JAEC example
    inputs:
    - name: nearend_mic
      data: https://dashscope.oss-cn-beijing.aliyuncs.com/samples/audio/jaec/nearend_mic.wav
    - name: farend_speech
      data: https://dashscope.oss-cn-beijing.aliyuncs.com/samples/audio/jaec/farend_speech.wav
  inferencespec:
    cpu: 1
    memory: 1000
    gpu: 0
    gpu_memory: 0
model_type:
- jaec
domain:
- audio
frameworks: PyTorch
customized-quickstart: true
license: Apache License 2.0
tags:
- Alibaba
- JAEC
- acoustic echo cancellation
- AEC
- speech enhancement
- real-time communication
---
# JAEC

JAEC is a 16 kHz acoustic echo cancellation frontend for real-time
communication. This release contains the neural time-delay estimation (TDE)
and adaptive linear processing (LP) runtime. It accepts microphone and far-end
reference signals and returns the LP output.

The native runtime processes 160 samples (10 ms) per call. The output retains
a fixed algorithmic delay of 352 samples (22 ms) relative to the microphone
input.

![JAEC TDE and LP frontend architecture](assets/jaec_architecture.png)

## Usage

JAEC requires **ModelScope > 1.39.1**. Once a compatible release is available on PyPI, install it with:

```bash
python -m pip install -U "modelscope>1.39.1"
```

Until then, install ModelScope from the official `master` branch:

```bash
python -m pip install -U \
  "modelscope @ git+https://github.com/modelscope/modelscope.git@master"
```

Run inference with two 16 kHz, mono, PCM16 WAV files of equal length:

```python
from modelscope.outputs import OutputKeys
from modelscope.pipelines import pipeline
from modelscope.utils.constant import Tasks


aec = pipeline(
    Tasks.acoustic_echo_cancellation,
    model='iic/speech_jaec_aec_16k',
    device='cpu',
    trust_native_code=True,
)

result = aec(
    {
        'nearend_mic': 'https://dashscope.oss-cn-beijing.aliyuncs.com/samples/audio/jaec/nearend_mic.wav',
        'farend_speech': 'https://dashscope.oss-cn-beijing.aliyuncs.com/samples/audio/jaec/farend_speech.wav',
    },
    output_path='output.wav',
)
pcm16_bytes = result[OutputKeys.OUTPUT_PCM]
```

`nearend_mic` and `farend_speech` may also be WAV bytes or one-dimensional
`numpy.int16` arrays. The pipeline pads an incomplete final 160-sample frame
internally and trims the output back to the original length.

The model repository contains native libraries. Set `trust_native_code=True`
only when loading a repository that you trust.

## Supported platforms

| Operating system | Architecture | Native library | Runtime requirement |
| --- | --- | --- | --- |
| macOS | Arm64 | `lib/jaec_arm.so` | macOS 11 or later |
| Linux | x86-64 | `lib/jaec_x86.so` | AVX2, FMA, glibc 2.27 or later |
| Windows | x86-64 | `lib/jaec_x86.dll` | 64-bit Windows |

The included Arm64 library is a macOS Mach-O binary. It does not support Linux
Arm64, Android, or iOS. The package does not include a 32-bit runtime.

## Runtime performance

Each RTF is the median of 10 runs. The timed region covers Python per-frame
inference and excludes WAV I/O and model initialization.

| Operating system | Architecture | CPU | Main clock | RTF |
| --- | --- | --- | --- | ---: |
| macOS | Arm64 | Apple M4 | 4.46 GHz | 0.0020 |
| Linux | x86-64 | Intel Xeon | 2.90 GHz | 0.0039 |
| Windows | x86-64 | Intel Core Ultra 9 185H | 2.30 GHz | 0.0029 |

## Limitations

- Inputs must be equal-length 16 kHz mono PCM16 signals, with the microphone in
  `nearend_mic` and the far-end reference in `farend_speech`.
- The output is the JAEC TDE+LP frontend result; this package does not include
  the nonlinear processing (NLP) network.
- Runtime compatibility is limited to the operating systems and architectures
  listed above.

## License

This release is licensed under the
[Apache License 2.0](LICENSE). Third-party attributions required by the native
binaries are provided in
[`THIRD_PARTY_NOTICES.md`](THIRD_PARTY_NOTICES.md).
