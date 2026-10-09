# JAEC 发布包逆向可行性初查

检查日期：2026-10-09。范围：公开文件列表、官方 README、Linux 二进制和权重文件的静态检查。未加载或运行目标库；未恢复完整网络或完成等价性验证。

## 发布范围

官方 README 明确说明，本次发布只包含神经时延估计 TDE 和自适应线性处理 LP，不包含非线性处理 NLP 网络。输入是 16 kHz 双路信号，按 160 点处理，官方标注固定算法延迟为 352 点，即 22 ms。

发布包包含 Linux x86-64、Windows x86-64、macOS Arm64 库，以及独立的 `weights/tde_lp.bin`。README 标注发布许可证为 Apache License 2.0。不能把这个包视为完整 JAEC 系统的源码或完整网络发布。

## 已核实的二进制事实

| 项目 | 检查结果 |
|---|---|
| Linux 库 | `jaec_x86.so`，120,968 字节，ELF64 x86-64 shared object |
| 符号状态 | 已 stripped，没有普通符号表；仍保留五个公开函数 |
| 公开函数 | `jaec_frontend_create`、`jaec_frontend_process`、`jaec_frontend_reset`、`jaec_frontend_destroy`、`jaec_frontend_last_error` |
| 直接动态依赖 | `libm.so.6`、`libc.so.6`、`ld-linux-x86-64.so.2` |
| 权重文件 | `tde_lp.bin`，105,216 字节，文件头为 `JAECAE1` |
| 权重封装 | 可确认是自定义头部，尚未确认具体张量布局、是否加密或压缩 |
| 第三方组件 | 公告列出 PFFFT/FFTPACK 和 Monocypher；不能仅凭此确定权重的保护方式 |

已对公开的 create 和 process 入口完成反汇编。process 入口可见空指针、正长度及 160 点整倍数检查，以及分块循环。create 可见内存分配、模型加载调用及初始化调用。内部函数名称、状态结构与网络计算仍需分析。

## 可行性判断

这个目标规模较小、有独立权重、有公开接口和架构图，因此值得尝试恢复 TDE+LP 推理行为。LLM 可辅助解释伪代码、命名数据结构和重写实现，但这些结果仍需用逐帧输出、状态重置、不同延迟和双讲输入与原库对照验证。文件体积小不保证恢复工作简单。

源码里的原始变量名、注释和工程结构一般无法唯一恢复。训练数据、训练脚本和未随包发布的 NLP 网络，也不能从这份前端包中可靠恢复。

## 校验值

Linux 库 SHA-256：

```text
854a09f4634d806daee2150409ad1921eae013589bab9568fefa1874678fd9e8
```

权重文件 SHA-256：

```text
40234f7abea80b238c2804d7ebe2b63cfa5d12a1c86a6e7895d40f80f1bca75d
```

两者均与官方文件列表吻合。

## 本地证据

- `README.md`：官方模型说明原文。
- `files.json`：官方递归文件列表、版本和 SHA-256。
- `static-inspection.json`：file、readelf、nm、strings 的命令和输出。
- `jaec_frontend_create.asm`、`jaec_frontend_process.asm`：objdump 反汇编。
- `THIRD_PARTY_NOTICES.md`：官方第三方组件说明。
- `jaec_architecture.png`：官方架构图。

来源：

```text
https://modelscope.cn/models/iic/speech_jaec_aec_16k/files
https://modelscope.cn/api/v1/models/iic/speech_jaec_aec_16k/repo/files?Revision=master&Recursive=true
https://modelscope.cn/api/v1/models/iic/speech_jaec_aec_16k/repo?Revision=master&FilePath=README.md
```
