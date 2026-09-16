# ⚡ FastJava, Native Java Performance Ecosystem [ALPHA]

> **5-50× faster than standard Java**. JNI-native libraries for automation, screen capture, graphics, math, JSON, and more.

---

[![Premium Overlay Showcase](docs/screenshot.png)
](https://www.youtube.com/watch?v=b3X2zFjV6GU&list=PL-mASGDMkCUqJ0bXAJP28ykqPP9RqMMsA)

---

### 🗺️ The Ecosystem

FastJava is not a framework, it is a modular, full-stack performance ecosystem designed to remove the unnecessary distance between Java and the machine.

Where the standard JVM abstracts, stalls, or lacks native interfaces entirely, FastJava provides thin, near-zero-overhead JNI bridges directly into DirectX, Win32, AVX2/AVX-512 SIMD, and native OS subsystems.

```
┌────────────────────────────────────────────────────────────────────────┐
│                        FastJava User Application                       │
├───────────────────┬───────────────────┬────────────────────────────────┤
│   AI & Agents     │    Input & UI     │     Filesystem & Data Parsing  │
│  FastAI / Agent   │  FastHotkey       │  FastJSON / FastBytes          │
│  FastAIModel      │  FastKeyboard     │  FastFileIndex / FastFileWatch │
│  FastAIMemoryGraph│  FastWindow       │  FastString / FastContentParse │
├───────────────────┴───────────────────┴────────────────────────────────┤
│                       Hardware & Media Engines                         │
│  FastScreen & FastScreenCapture (DXGI Desktop Duplication)             │
│  FastAudioCapture & FastAudioPlayer (WASAPI Hardware DSP)              │
│  FastGraphics & FastOverlay (DirectX 11 / DirectComposition)           │
│  FastGPU & FastMath (Vulkan Compute, SPIR-V, OpenCL)                   │
├────────────────────────────────────────────────────────────────────────┤
│                       Off-Heap Foundation Layer                        │
│  FastMemory (32-Byte Aligned RAM) │ FastPointer (Direct Address Math)  │
│  FastSIMD (AVX2 / AVX-512)        │ FastCore (Native DLL Auto-Loader)  │
└────────────────────────────────────────────────────────────────────────┘
```

- ⚡ **Native & Foundation**: Cross-platform DLL loader (`FastCore`), pointer math (`FastPointer`), 32-byte aligned RAM (`FastMemory`), AVX2/AVX-512 vectorization (`FastSIMD`), shared memory (`FastSharedMemory`).
- 🤖 **AI & Autonomous Agents**: Local matrix inference (`FastAIModel`), zero-alloc vector DB (`FastAIVectorDB`), agents (`FastAIAgent`), memory graphs (`FastAIMemoryGraph`), RAG (`FastAIRag`).
- 📁 **Filesystem & Storage**: USN Journal change journal (`FastFileWatch`), mmap indexing (`FastFileIndex`, `FastIO`), Trie-search (`FastFileSearch`), dual text/binary format (`FastFileFormat`).
- ⚙️ **Parsing & Data Formats**: SIMD JSON (`FastJSON`), UTF-8 engine (`FastString`), VarInt packing (`FastBinary`), ANSI state machine (`FastANSI`), zero-alloc regex (`FastRegex`).
- 🔢 **Compute & Math**: GPU Compute & SPIR-V (`FastGPU`), fast math kernels (`FastMath`), vector quantization (`FastQuant`).
- ⌨️ **Input & Automation**: Global hotkeys (`FastHotkey`), RawInput (`FastKeyboard`, `FastMouse`), Touch/Stylus, DirectX capture (`FastRobot`), native UIA (`FastUIA`).
- 👁️ **Vision & Screen Capture**: DXGI zero-copy capture (`FastScreen`), bit-perfect grabber & 60 FPS video pipe (`FastScreenCapture`), webcam (`FastCamera`), WinRT OCR (`FastOCR`).
- 🔊 **Audio & Voice**: WASAPI hardware capture & loopback (`FastAudioCapture`, `FastAudioPlayer`), real-time STT/TTS, VAD (`FastVAD`), wake-word (`FastWakeWord`).
- 🎨 **Graphics & Animation**: GPU overlays (`FastOverlay`, `FastGhostMouse`), SIMD image ops (`FastImage`), DirectComposition windowing (`FastWindow`), 60/120 FPS timelines (`FastAnimation`, `FastTween`).
- 📟 **Terminal & Display**: Double-buffered TUI (`FastTerminal`), ConPTY (`FastConPTY`), per-monitor DPI (`FastDisplay`), native Windows themes (`FastTheme`).

👉 **Full 108-module directory, live traffic stats & JitPack matrix:**  
🔗 **[github.com/andrestubbe](https://github.com/andrestubbe)**

---

## 🎯 Philosophy

Java alone cannot do:
- ❌ Global hotkeys when unfocused
- ❌ Low-latency screen capture
- ❌ Reliable clipboard operations
- ❌ Hardware I/O access
- ❌ GPU acceleration
- ❌ Native input devices
- ❌ ..

**FastJava fixes this.** Mostly pure C++ accelerators. JNI bindings. Zero overhead.

---

## ⚖️ Why Java? Why C++? Why Both?

A common question: *Why not write everything in pure C++? Or pure Java? Or Rust / C#?*

FastJava is founded on a deliberate split of concerns: **Java is the portable control plane. C++ is the hardware engine.**

```
┌─────────────────────────────────────────────────────────────────────────┐
│ Java 21+ Control Plane (Orchestration & Application Logic)             │
│  • Runs Everywhere: Windows, macOS, Linux, ARM64 (Unified API)          │
│  • Memory-Safe High-Level APIs, Concurrency, Virtual Threads & Ecosystem│
└────────────────────────────────────┬────────────────────────────────────┘
                                     │ Zero-Copy FFM / Critical JNI (~2-5 ns)
┌────────────────────────────────────▼────────────────────────────────────┐
│ Platform-Neutral C++ Engine (90-95% Shared Codebase)                    │
│  • Direct Memory, SIMD (AVX2/AVX-512/NEON), Ring Buffers, GPU Compute   │
│  • Lock-free Data Structures, Custom Fast-Allocators, Zero GC Overhead  │
└────────────────────────────────────┬────────────────────────────────────┘
                                     │ Thin Native OS Hooks (<5-10%)
            ┌────────────────────────┼────────────────────────┐
            ▼                        ▼                        ▼
     Windows (Win32)           macOS (Quartz/Metal)      Linux (X11/Wayland)
   DirectX / RawInput          CoreGraphics / IOKit       libinput / evdev
```

### ☕ Why Java?
* **Write Once, Orchestrate Everywhere:** Java runs seamlessly on Windows, Linux, macOS, cloud instances, and edge ARM boards. One single JAR can target all desktop & server targets.
* **World-Class Tooling & Ecosystem:** Unmatched IDEs, profilers (Async-Profiler, JFR), mature package registries (Maven Central, JitPack), and instant build pipelines.
* **Modern Memory Safety & Concurrency:** High-level agent loops, business logic, and complex state management without buffer-overflows, use-after-free bugs, or compiler-specific ABI drift. Virtual Threads (Project Loom) handle millions of concurrent tasks with ease.

### ⚡ Why C++?
* **Uncompromising Bare-Metal Speed:** Direct CPU vectorization (AVX2, AVX-512, ARM NEON), bit-exact structs, and cache-line aligned allocations.
* **Hardware-Level Subsystems:** Direct access to Win32 hooks, DirectX/DXGI screen buffers, macOS Quartz/CoreGraphics, Linux `libinput`/`evdev`, and Vulkan/GPU queues that the standard JVM simply cannot reach.
* **Predictable Determinism:** Zero GC pauses, zero JIT warm-up latency, and sub-microsecond response times on critical input and media pipelines.

### 🌐 Cross-Platform C++: How It Works
We don't rewrite code 3 times:
1. **Portable Core Engine (90-95%):** Pure modern C++17/C++20 (math kernels, ring buffers, parsers, image manipulators, AI vector ops) compiles identically with MSVC, Clang, and GCC across all operating systems.
2. **Thin OS Drivers (5-10%):** A strictly isolated native platform layer binds directly to OS-specific APIs:
   - **Windows:** Win32 RawInput, DirectX/DXGI, DirectComposition, DWM.
   - **macOS:** Quartz Event Taps, CoreGraphics, Metal.
   - **Linux:** X11 / Wayland, `libinput`, `evdev`, V4L2.

---

### 🔬 Architecture Comparison: The Right Tool for the Job

| Metric / Capability | Pure Java | Pure C++ | C# / .NET | Rust | **FastJava (Java + C++)** |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Cross-Platform JAR Distribution** | ✅ Single JAR | ❌ Recompile & build per OS | ⚠️ Runtime dependent | ❌ Recompile per target | **✅ Single portable JAR + auto-extract binaries** |
| **OS-Level Subsystem Access** *(Hooks, DXGI, Wasapi)* | ❌ Impossible | ✅ Direct | ⚠️ Windows-heavy | ✅ Direct | **✅ Direct (<5 ns JNI / FFM call gate)** |
| **SIMD & Zero-GC Off-Heap Throughput** | ⚠️ JIT dependent | ✅ Full control | ⚠️ CLR dependent | ✅ Full control | **✅ 100% Deterministic (C++ Engine)** |
| **Developer Ergonomics & Ecosystem** | ✅ Huge | ❌ Complex package mgmt | ⚠️ Locked to .NET | ⚠️ Steep curve | **✅ Instant Maven/JitPack dependency import** |
| **Real-Time Input Latency** | ~15–50 ms | < 1 ms | ~5–20 ms | < 1 ms | **< 1 ms (Hardware Native)** |

---

## 🌌 Origin Story

### 🌒 WHY: The Restlessness Before the First Module
**Junior:** "Java is slow… right? Everyone says that. Must be normal."
**Senior:** "No. That's not a law of nature. That's just bad architecture."
**Designer:** "I see friction. I see unnecessary layers. This feels wrong."
A shift begins: acceptance → doubt → clarity.
Java developers treat slowness like gravity: unavoidable, unquestioned, built into the universe. We refused that worldview. We wanted proof that "slow" wasn't a law of nature, just a habit.

### 🌕 HOW IT STARTED: The Moment Everything Shifted
**Junior:** "Let me try something small… maybe Clipboard?"
**Senior:** "Do it native. No overhead. No framework weight."
**Designer:** "If this is faster, it proves something bigger."
FastClipboard appears. Twice as fast. Zero bugs.
The mental state moves: experiment → proof → vision.

### 🌖 BECAUSE: The Realization That Changed Everything
**Junior:** "Why does everything feel heavy?"
**Senior:** "Because Java isn't slow, only the layers above it are."
**Designer:** "The language isn't the problem. The design of the tools is."
The shift continues: frustration → analysis → realization.
Java's "write once, run anywhere" became "write once, run slow everywhere." Native code isn't the enemy, unnecessary abstraction is.

### 🌑 THEREFORE: The Reason FastJava Exists
**Junior:** "Can't we just make this better?"
**Senior:** "Yes. Minimal overhead. Native where it matters. Java where it makes sense."
**Designer:** "This isn't a framework. It's a counter-design."
The state settles: desire → decision → identity.
Maximum performance through minimal overhead. JNI where it matters. Pure Java where it doesn't.

---

## ⚡ The Truth About Speed

I run the benchmarks myself. I don't negotiate with numbers. I don't sweet-talk performance. I don't pretend something is fast because I want it to be. Speed doesn't care about opinions, only measurements. I can't lie to myself, because the CPU won't lie back. Faster is faster. Slower is slower. Reality is binary at that level. This isn't about money. This isn't about hype.This isn't about selling anything. This is about quality, the kind you can't fake, can't market, can't decorate.
The kind you can only prove. FastJava exists because truth shows up in microseconds, not in slogans.

---

## 🚧 Current Status

**[ALPHA]**: APIs may change. Not production-ready yet.

- ✅ **117 (/131) Active Repositories**: Available now on GitHub & JitPack.
- 🚧 **Roadmap**: Security, Network, Diagnostics, Compute, and more in active development.
- ✅ **Platform Support**: Windows 10/11 fully supported (x64). Linux and macOS support in progress.

---

**Part of the FastJava Ecosystem**. *Making the JVM faster.* 🚀

