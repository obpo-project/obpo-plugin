# Obfuscated Binary Pseudocode Optimizer

Obpo is a microcode-based hex-rays optimizer, uses techniques such as static-program-analysis, dataflow-tracking,
concolic-execution to rebuild the obfuscated control flow (such as: OLLVM).

## obpo-plugin

Obpo is not open source yet, but currently provides obpo-plugin for testing. obpo-plugin is a cloud plugin, the binary
code of the target function will be sent to the obpo server for processing, and the response result will be applied to
the decompilation process.

## Supported Version

obpo-plugin currently requires the following versions of hex-rays decompiler:

| Hex-Rays Version | Arch                     | Tested |
| ---------------- | ------------------------ | ------ |
| 7.7.0.220118     | ARM64, X86, X86_64       | ✔️   |
| 7.6.0.210427     | ARM, ARM64, X86, X86_64  | ✔️   |
| 7.6.0.210427     | PowerPC, PowerPC64, MIPS | ❌️   |
| 7.5.0.201028     | ARM, ARM64, X86, X86_64  | ✔️   |
| 7.5.0.201028     | PowerPC, PowerPC64, MIPS | ❌️   |

