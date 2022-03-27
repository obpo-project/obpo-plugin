# Obfuscated Binary Pseudocode Optimizer

[ENGLISH README](README_EN.md)

Obpo 是一个基于 Hex-ray Microcode 的 IDA 反编译代码优化插件， 使用了静态程序分析、数据流跟踪、混合执行等技术来重建被混淆的控制流（例如 OLLVM）

## obpo-plugin

Obpo 暂时还不是开源的， 现在提供 obpo-plugin 供测试使用。 obpo-plugin 是一个云插件，使用过程中会将目标函数的二进制代码发送到 obpo 的服务器进行处理，然后会将响应结果作用在反编译的过程中。

### 注意

1. Obpo 并不能解决所有的混淆问题，但个人希望它能成为一个有力的可选项。
2. 迫于服务器性能限制，目前设置了 60 秒的处理超时。如果发现有滥用或者恶意攻击的行为，我可能会随时关闭服务器。

## 支持

obpo-plugin 目前要求使用下列版本的 hex-rays 反编译器:

| Hex-Rays Version | Arch                     | Tested |
| ---------------- | ------------------------ | ------ |
| 7.7.0.220118     | ARM64, X86, X86_64       | ✔️   |
| 7.6.0.210427     | ARM, ARM64, X86, X86_64  | ✔️   |
| 7.6.0.210427     | PowerPC, PowerPC64, MIPS | ❌️   |
| 7.5.0.201028     | ARM, ARM64, X86, X86_64  | ✔️   |
| 7.5.0.201028     | PowerPC, PowerPC64, MIPS | ❌️   |

## 安装方法

复制 `obpo_plugin.py` and `obpoplugin` 到 IDA 的 plugins 目录。

## 使用方法

Obpo 需要手动标记控制流平坦化的分发块之后才能进行自动分析，分发块一般长这样：

![](./assets/dispatchblock.png)

在控制流图上面右键，点击 `OBPO -> Mark and process function`。处理完成之后刷新反编译器，就像这样：

![](./assets/demo.gif)

根据反编译的变化可以继续标记分发块。

## 样本

[samples](samples) 目录中保存了自动测试生成的伪代码以及对比参考图。

### 反馈

目前所有测试使用的样本都记录在 [obpo-project/samples](https://github.com/obpo-project/samples) 仓库，欢迎继续提交其他样本。