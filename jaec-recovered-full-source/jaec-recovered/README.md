# JAEC 可编译源码重建

已经把 `jaec_x86.so` 的完整 TDE+LP 推理链路重建为可阅读、可独立编译的 C11 源码。
运行时直接读取发布包里的原始 `tde_lp.bin`，没有修改、重新训练或替换权重；
重建库不加载、不链接原来的 `jaec_x86.so`。

这是根据二进制行为恢复的实现。函数名、结构体名与注释由本项目补充，
不代表作者的原始源码。算法链路已做逐模块和整段音频对照；
没有逐条复刻原库的所有 AVX2 优化，也不承诺任意输入逐位一致。

当前构建和验证平台：Linux x86-64，GCC，Intel Core i7-13700K。
尚未验证 ARM、Windows 或 macOS 的构建与数值行为。

## 直接使用

```bash
cd /home/nd/nova/experiments/jaec-reverse-20261009
make
python3 tools/process_wav.py \
  --mic analysis/example/nearend_mic.wav \
  --ref analysis/example/farend_speech.wav \
  --out build/output.wav
```

WAV 工具需要 Python 3 和 NumPy；C 库只需 C 工具链与系统数学库。
输入为等长的 16 kHz、单声道、PCM16 WAV。末尾不足一帧时补零并裁回原长度，
行为与发布包的 Python 包装层一致。输出保留原库的 **352 个采样点，即 22 ms 延迟**。
不自动补齐被截在最后的延迟尾音。

构建输出：

- `build/libjaec_recovered.so`：恢复原库 TDE 跳帧逻辑及 x86 近似激活函数的版本。
- `build/libjaec_scalar.so`：普通标量数学版本，用于对照原库内部标量路径。
- `build/libjaec_loader.so`：单独的模型加载模块，用于验证。

头文件为 [src/jaec.h](src/jaec.h)。五个 C 接口及 ELF 符号版本
`JAEC_FRONTEND_1.0` 与原库一致。处理长度必须为正数且是 160 的整数倍。
同一状态对象应串行使用；不同状态对象可以分别处理不同音频流。
支持输出与任一输入完全重合；不声明支持任意偏移的部分内存重叠。

```c
#include "jaec.h"

void *aec = jaec_frontend_create("original/tde_lp.bin");
if (!aec) {
    /* jaec_frontend_last_error() 返回错误文本。 */
    return;
}
/* mic/ref/output 是 int16_t 数组，每帧 160 个采样点。 */
int status = jaec_frontend_process(aec, mic, ref, 160, output);
/* 处理新的一条流前，可调用 jaec_frontend_reset(aec)。 */
jaec_frontend_destroy(aec);
```

运行重建库只需要它本身和原始权重文件。`original/jaec_x86.so` 仅供对照测试使用。
恢复代码里没有 `dlopen`、`dlsym` 或跳转回原二进制的调用。

## 恢复了哪些代码

| 源文件 | 内容 |
| --- | --- |
| [src/frontend.c](src/frontend.c) | 五个公开接口、PCM 转换、双份环形缓冲、窗函数、FFT 封装、重叠相加、量化、22 ms 延迟和远端活动保持逻辑 |
| [src/tde.c](src/tde.c) | 16 个频点的归一化相关性、100 个候选延迟、两层宽度 5 卷积、softmax、16 维 GRU 平滑、稳定状态跳帧、参考谱对齐 |
| [src/linear_aec.c](src/linear_aec.c) | 六维频域特征、步长 4 的卷积编码器、32 维 GRU、两级频率上采样、步长/衰减预测、四抽头复数自适应滤波 |
| [src/activation_compat.c](src/activation_compat.c) | 从 AVX2 汇编恢复的指数多项式和倒数近似，用于贴近原库默认数值行为 |
| [src/model_loader.c](src/model_loader.c) | 原始 `tde_lp.bin` 的加载、认证及布局恢复 |
| [src/dsp_internal.h](src/dsp_internal.h) | 网络状态结构、维度、辅助函数；TDE 内存布局附原始偏移 |
| `src/vendor/` | Monocypher 4.0.3 和 PFFFT；保留来源、许可证与内容校验记录 |

LP 网络预测的是自适应滤波器的更新步长和衰减系数。恢复版保留了原模型计算图，
把原库预融合的线性解码器写成显式卷积，便于检查、修改和移植。
详细权重布局与 RVA 对应关系见 [analysis/recovery-map.md](analysis/recovery-map.md)。

原始静态分析材料保留在：

- [analysis/ghidra/decompiled.c](analysis/ghidra/decompiled.c)：Ghidra 原始 C 伪代码，**不能直接当作可编译源码**。
- `analysis/ghidra/functions/`：按地址分开的伪代码文件。
- [analysis/functions-recovered.json](analysis/functions-recovered.json)：99 个识别到的内部代码函数及重建对应关系；含编译器辅助、FFT 和密码学函数。
- [analysis/full-disassembly.asm](analysis/full-disassembly.asm)：原始反汇编。

## 验证结果

```bash
make check
make sanitize
```

`make check` 在测试进程内调用原库，完成以下对照：

1. 模型加载后的 **105,184 字节逐字节一致**；磁盘上的权重保持原样，大小为 105,216 字节。
2. 24 组随机 FFT 输入的频谱逐点一致；240 帧连续状态测试中，
   TDE 相关性特征和两层卷积逐点一致，概率最大差约 `1.2e-7`；
   LP 输出复数谱最大差约 `3.8e-6`。
3. 十组合成音频测试，覆盖静音、脉冲、近端、远端、双讲、回声路径改变、
   远端停止超过三秒后恢复、满幅随机信号和极低幅度输入。
4. 官方发布页提供的十秒语音样例。
5. 重置、160/320 点分块、输入输出原地复用、空指针与非法长度处理。

恢复版与原库的对照结果如下。误差单位都是有符号 PCM16 的整数单位：

| 测试 | 默认重建版 vs 原库默认路径：最大误差 / RMS | 标量重建版 vs 原库标量路径：最大误差 / RMS |
| --- | --- | --- |
| 静音、近端脉冲、近端信号 | 0 / 0 | 0 / 0 |
| 六秒远端回声 | 1 / 0.119 | 1 / 0.010 |
| 六秒双讲 | 1 / 0.150 | 1 / 0.010 |
| 六秒回声路径改变 | 1 / 0.173 | 1 / 0.013 |
| 十二秒远端停止与恢复 | 2 / 0.394 | 1 / 0.014 |
| 六秒满幅、不相关的双路随机信号 | 9 / 1.569 | 1 / 0.043 |
| 官方十秒语音样例 | 6 / 0.499 | 1 / 0.018 |

官方语音样例与原库标量路径对照时，**99.966875% 的采样点完全一致**，其余最多差 1。
默认路径的剩余误差与浮点运算次序、矩阵融合、近似运算及状态迭代有关；
尚未逐项证明所有剩余差异的来源。这些是已测输入上的结果，不是任意输入的误差上界，
也不构成 AEC 质量或 SOTA 评测。

原始报告：

- [模型加载](analysis/loader-validation.json)
- [FFT/TDE/LP 模块对照](analysis/module-validation.json)
- [默认路径音频及接口对照](analysis/recovered-validation-default.json)
- [标量路径音频及接口对照](analysis/recovered-validation-scalar.json)

在此机上，默认重建版处理官方十秒样例约需 0.56 秒，实测 RTF 约 **0.056**。
这是当前环境的一次测量，计时包括 Python 按帧调用，未包含 WAV 读写和初始化。
原库有更多 SIMD 和算子融合优化，恢复版优先保留清楚的计算结构。

官方样例音频及对照输出在 `analysis/example/`。这些 WAV 不纳入 Git。
缺少样例文件时，`make check` 仍运行全部合成用例，并跳过官方样例。
可从原始 [original/README.md](original/README.md) 中列出的地址获取样例。

`make sanitize` 使用 ASan、UBSan 和 LeakSanitizer 运行不加载原库的 C 流式测试。
受 ptrace 跟踪的沙箱不能正常运行 LeakSanitizer；需在普通本机终端执行完整泄漏检查。

## 范围和来源

本项目针对本目录保存的 Linux `jaec_x86.so` 与 `tde_lp.bin` 版本。
它恢复的是该发布包的 TDE+LP 推理前端；没有训练脚本、训练数据或未随该二进制发布的网络。
当前实现以本文件中列出的数值对照为依据，不声称恢复了供应商的原始开发工程。

来源是用户指定的 ModelScope 模型仓库 `iic/speech_jaec_aec_16k`。
原始文件及许可证保留在 `original/`，重建代码沿用发布包的 Apache-2.0 许可。
第三方代码见 [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md)，PFFFT 的内容校验
与上游 Git 树记录见 `src/vendor/pffft/PROVENANCE.json`。
