# Obfuscated Binary Pseudocode Optimizer

[中文说明](https://mp.weixin.qq.com/s/ZA-Pt7WnEhGXlFSi5hJrcw)

Obpo is a microcode-based hex-rays optimizer, uses techniques such as dataflow-tracking, program-slicing, 
concolic-execution to rebuild the obfuscated control flow.

## obpo-plugin

The core of obpo is not open source, but provided **FREE & OPEN SOURCE** obpo-plugin. obpo-plugin is a cloud plugin, the binary
code of the target function will be sent to the obpo server for processing, and the response result will be applied to
the decompilation process. These all uploaded data and processes can be seen in the obpo-plugin's code.

## obpo-server

About how to process uploaded data, I published the source code for [obpo-server](https://github.com/obpo-project/obpo-server). 
This is a simple backend server written in golang, used to receive request and input to ida and uses obpo-core to deobfuscation, 
finally returning data to obpo-plugin client.

## NOTE

1. Obpo can't solve all obfuscate problems, but I hope it can be a powerful option.
2. Due to the limited server performance, the timeout is limited to 180s. Server is very small(2h2g and self-financing), please don't abuse it (e.g. multithreading, malicious attacks).

## Supported Version

obpo-plugin currently requires the following versions of hex-rays decompiler:

| Hex-Rays Version | Arch                     |
| ---------------- | ------------------------ |
| 7.7.0.220118     | ARM64, X86, X86_64       |
| 7.6.0.210427     | ARM, ARM64, X86, X86_64, PowerPC, PowerPC64, MIPS |
| 7.5.0.201028     | ARM, ARM64, X86, X86_64, PowerPC, PowerPC64, MIPS |

## Installation

Copy `obpo_plugin.py` and `obpoplugin` into ida plugins path.

## Usages

Obpo requires you to manually mark a dispatch block for Control Flow Flattening before automated analysis. Normally, the
dispatch block looks like this:

![](./assets/dispatchblock.png)

Right-click on the control flow graph, click `OBPO -> Mark and process function`. Refresh the decompiler after
processing is complete, like this:

![](./assets/demo.gif)

Depending on the decompilation changes you can continue to mark dispatch blocks.

## Samples

In the [samples](samples) directory, saved some pseudocode and compare image by automation testing.

### Feedback

All sample binaries are saved in [obpo-project/samples](https://github.com/obpo-project/samples). Welcome to submit
other sample.
