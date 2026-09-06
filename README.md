# ⚡ FastJava — Native Java Performance Ecosystem [ALPHA]

> **5-50× faster than standard Java** — JNI-native libraries for automation, screen capture, graphics, math, JSON, and more.

---

[![Premium Overlay Showcase](docs/screenshot.png)
](https://www.youtube.com/watch?v=b3X2zFjV6GU&list=PL-mASGDMkCUqJ0bXAJP28ykqPP9RqMMsA)

---

### 🗺️ The Ecosystem

FastJava is not a framework — it is a modular, full-stack performance ecosystem designed to remove the unnecessary distance between Java and the machine.

Where the standard JVM abstracts, stalls, or lacks native interfaces entirely, FastJava provides thin, near-zero-overhead JNI bridges directly into DirectX, Win32, AVX2/AVX-512 SIMD, and native OS subsystems.

- ⚡ **Native & Foundation** — Cross-platform DLL loader (`FastCore`), pointer math (`FastPointer`), 32-byte aligned RAM (`FastMemory`), AVX2/AVX-512 vectorization (`FastSIMD`), shared memory (`FastSharedMemory`).
- 🤖 **AI & Autonomous Agents** — Local matrix inference (`FastAIModel`), zero-alloc vector DB (`FastAIVectorDB`), agents (`FastAIAgent`), memory graphs (`FastAIMemoryGraph`), RAG (`FastAIRag`).
- 📁 **Filesystem & Storage** — USN Journal change journal (`FastFileWatch`), mmap indexing (`FastFileIndex`, `FastIO`), Trie-search (`FastFileSearch`), dual text/binary format (`FastFileFormat`).
- ⚙️ **Parsing & Data Formats** — SIMD JSON (`FastJSON`), UTF-8 engine (`FastString`), VarInt packing (`FastBinary`), ANSI state machine (`FastANSI`), zero-alloc regex (`FastRegex`).
- 🔢 **Compute & Math** — GPU Compute & SPIR-V (`FastGPU`), fast math kernels (`FastMath`), vector quantization (`FastQuant`).
- ⌨️ **Input & Automation** — Global hotkeys (`FastHotkey`), RawInput (`FastKeyboard`, `FastMouse`), Touch/Stylus, DirectX capture (`FastRobot`), native UIA (`FastUIA`).
- 👁️ **Vision & Screen Capture** — DXGI zero-copy capture (`FastScreen`), bit-perfect grabber & 60 FPS video pipe (`FastScreenCapture`), webcam (`FastCamera`), WinRT OCR (`FastOCR`).
- 🔊 **Audio & Voice** — WASAPI hardware capture & loopback (`FastAudioCapture`, `FastAudioPlayer`), real-time STT/TTS, VAD (`FastVAD`), wake-word (`FastWakeWord`).
- 🎨 **Graphics & Animation** — GPU overlays (`FastOverlay`, `FastGhostMouse`), SIMD image ops (`FastImage`), DirectComposition windowing (`FastWindow`), 60/120 FPS timelines (`FastAnimation`, `FastTween`).
- 📟 **Terminal & Display** — Double-buffered TUI (`FastTerminal`), ConPTY (`FastConPTY`), per-monitor DPI (`FastDisplay`), native Windows themes (`FastTheme`).

👉 **Full module directory, architecture layers & real-world benchmarks:**  
🔗 **[docs/ECOSYSTEM.md](docs/ECOSYSTEM.md)**

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

## 🌌 Origin Story

### 🌒 WHY — The Restlessness Before the First Module
**Junior:** "Java is slow… right? Everyone says that. Must be normal."
**Senior:** "No. That's not a law of nature. That's just bad architecture."
**Designer:** "I see friction. I see unnecessary layers. This feels wrong."
A shift begins: acceptance → doubt → clarity.
Java developers treat slowness like gravity: unavoidable, unquestioned, built into the universe. We refused that worldview. We wanted proof that "slow" wasn't a law of nature — just a habit.

### 🌕 HOW IT STARTED — The Moment Everything Shifted
**Junior:** "Let me try something small… maybe Clipboard?"
**Senior:** "Do it native. No overhead. No framework weight."
**Designer:** "If this is faster, it proves something bigger."
FastClipboard appears. Twice as fast. Zero bugs.
The mental state moves: experiment → proof → vision.

### 🌖 BECAUSE — The Realization That Changed Everything
**Junior:** "Why does everything feel heavy?"
**Senior:** "Because Java isn't slow — only the layers above it are."
**Designer:** "The language isn't the problem. The design of the tools is."
The shift continues: frustration → analysis → realization.
Java's "write once, run anywhere" became "write once, run slow everywhere." Native code isn't the enemy — unnecessary abstraction is.

### 🌑 THEREFORE — The Reason FastJava Exists
**Junior:** "Can't we just make this better?"
**Senior:** "Yes. Minimal overhead. Native where it matters. Java where it makes sense."
**Designer:** "This isn't a framework. It's a counter-design."
The state settles: desire → decision → identity.
Maximum performance through minimal overhead. JNI where it matters. Pure Java where it doesn't.

---

## ⚡ The Truth About Speed

I run the benchmarks myself. I don't negotiate with numbers. I don't sweet-talk performance. I don't pretend something is fast because I want it to be. Speed doesn't care about opinions — only measurements. I can't lie to myself, because the CPU won't lie back. Faster is faster. Slower is slower. Reality is binary at that level.

This isn't about money.
This isn't about hype.
This isn't about selling anything.

This is about quality — the kind you can't fake, can't market, can't decorate.
The kind you can only prove.

FastJava exists because truth shows up in microseconds, not in slogans.

---

## 🚧 Current Status

**[ALPHA]** — APIs may change. Not production-ready yet.

- ✅ **108 Active Repositories** — Available now on GitHub & JitPack
- 🚧 **Roadmap** — Security, Network, Diagnostics, Compute and more in development
- ✅ Windows fully supported — Linux/macOS in progress

---

**Part of the FastJava Ecosystem** — *Making the JVM faster. Small package. Maximum speed. Zero bloat. 🚀📋*

