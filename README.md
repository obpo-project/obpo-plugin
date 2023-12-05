# Obfuscated Binary Pseudocode Optimizer

[中文说明](https://mp.weixin.qq.com/s/ZA-Pt7WnEhGXlFSi5hJrcw)

obpo is a pseudo-code optimizer based on hex-rays microcode, uses techniques such as dataflow-tracking, program-slicing, 
concolic-execution to rebuild the flatterned control flow.

obpo 是一个基于 hex-rays microcode 的伪代码优化器，使用数据流跟踪，程序切片，混合执行等技术来重建被平坦化的控制流。

## obpo-plugin

**The obpo core is closed source**, but provided **obpo-plugin is FREE & OPEN SOURCE**. obpo-plugin is a cloud plugin, the binary
code of the target function will be sent to the obpo-server for processing, and the response result will be applied to
the decompilation process. These all uploaded data and processes can be seen in the obpo-plugin's code.

**obpo 核心代码不是开源的**，但提供**免费且开源的 obpo-plugin**. obpo-plugin 是一个云插件，目标函数的二进制代码会被发送到 obpo-server 进行处理，
并将结果应用到反编译过程中。这些上传的数据和流程都可以在 obpo-plugin 的代码中看到。

**声明：obpo 到目前为止没有过任何直接或间接的付费服务或捐赠渠道，服务器资源均由作者自费承担，服务如果出现宕机可以发起 issue，我会抽空维护。
（翻译：爱用不用别来阴阳怪气，你行你开源）**

## obpo-server

About how to process uploaded data, I published the source code for [obpo-server](https://github.com/obpo-project/obpo-server). 
This is a simple backend server written in golang, used to receive request and input to ida and uses obpo-core to deobfuscation, 
finally returning data to obpo-plugin client. 

关于如何处理上传的数据，我上传了 [obpo-server](https://github.com/obpo-project/obpo-server) 的源代码。这是一个用 golang 写的简易后端服务器，
用来接收请求后输入到 ida 并调用 obpo core 来反混淆，最后返回数据给 obpo-plugin 客户端。

**But please remember that obpo-core is still closed source.** You can't use obpo-server to run an self obpo service, 
but you can use it as a reference for how to use it to implement a cloud plugin for decompile optimize

**但请记住 obpo-core 依然是闭源的。** 你无法用 obpo-server 来运行一个自己的 obpo 服务，但你可以用来参考如何实现一个反编译优化的云插件。

## NOTE

1. Obpo can't solve all obfuscate problems, but I hope it can be a powerful option.
2. Due to the limited server performance, the timeout is limited to 600s. Server is self-financing, please don't abuse it (e.g. multithreading, malicious attacks).

...

1. obpo 无法解决所有混淆问题，但我希望它能成为一个有力的可选项。（翻译：懒得手工去混淆的话就试试，别指望啥都能行）
2. 由于服务器性能有限，超时限制为600s。服务器是自费的，请勿滥用（如多线程、恶意攻击）。

## Supported Version

obpo-plugin currently requires the following versions of hex-rays decompiler:

obpo-plugin 需要使用以下版本的 hex-rays 反编译器才能正常工作：

| Hex-Rays Version | Arch                     |
| ---------------- | ------------------------ |
| 7.7.0.220118     | ARM64, X86, X86_64       |
| 7.6.0.210427     | ARM, ARM64, X86, X86_64, PowerPC, PowerPC64, MIPS |
| 7.5.0.201028     | ARM, ARM64, X86, X86_64, PowerPC, PowerPC64, MIPS |

## Installation

Copy `obpo_plugin.py` and `obpoplugin` into ida plugins path.

将 `obpo_plugin.py` 和 `obpoplugin` 复制到 ida 插件路径中。

## Usages

Obpo requires you to manually mark a dispatch block for Control Flow Flattening before automated analysis. Normally, the
dispatch block looks like this:

Obpo 要求您在自动分析之前手动标记用于控制流扁平化的分发块。通常情况下，分发块看起来像这样：

![](./assets/dispatchblock.png)

Right-click on the control flow graph, click `OBPO -> Mark and process function`. Refresh the decompiler after
processing is complete, like this:

右键单击控制流图，单击“OBPO -> Mark and process function”。之后刷新反编译器处理完成，如下：

![](./assets/demo.gif)

Depending on the decompilation changes you can continue to mark dispatch blocks.

根据反编译的变化，您可以继续标记分发块。

## Samples

In the [samples](samples), saved some pseudocode and compare image by automation testing.

在 [samples](samples) 中，保存了一些通过自动化测试产生的伪代码以及比较图像。

### Feedback

All sample binaries are saved in [obpo-project/samples](https://github.com/obpo-project/samples). Welcome to submit
other sample.

所有示例二进制文件都保存在 [obpo-project/samples](https://github.com/obpo-project/samples) 中。欢迎提交其他样本。
