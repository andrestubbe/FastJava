# FastJava

**Java's missing OS layer for AI, Bots & Automation.**

FastJava is a native performance framework for Java that bridges the gap between JVM and operating system. It delivers 60+ modules for ultra-low-latency input, high-FPS screen capture, GPU rendering, system introspection, vision, OCR, audio, AI integration, and native utilities.

FastJava is **minimal, deterministic, zero-bullshit** — built for bots, automation, vision pipelines, and AI agents.

---

## 🚀 Features

- **Native Speed** — [DirectX](https://learn.microsoft.com/en-us/windows/win32/directx), [Win32](https://learn.microsoft.com/en-us/windows/win32/apiindex/windows-api-list), [DWM](https://learn.microsoft.com/en-us/windows/win32/dwm/dwm-overview), [IOCP](https://learn.microsoft.com/en-us/windows/win32/fileio/i-o-completion-ports), [SIMD](https://en.wikipedia.org/wiki/SIMD), [CUDA](https://developer.nvidia.com/cuda-zone)
- **Zero-Copy Everywhere** — Screen, Images, IPC, GPU
- **Unified [JNI](https://docs.oracle.com/javase/8/docs/technotes/guides/jni/) Core** — FastCore as foundation
- **Agent-Friendly** — FastAI, FastToolBridge, FastContext
- **Modular** — 62 modules, optional, combinable
- **Cross-Platform** — Windows, Linux, macOS (module-dependent)

---

## 📦 Module Overview (62)

### Core (Agent I/O)
FastRobot, FastScreen, FastInput, FastInputHook, FastVision, FastHotkey, FastGamepad, FastHumanInput

### System & Window
FastWindow, FastProcess, FastTheme, FastOverlay, FastWindowEvents, FastSystemMetrics, FastDWM, FastFileWatch, FastProcessWatch

### Display & Graphics
FastGraphics, FastImage, FastImageView, FastDisplay, FastColorSearch

### Data & I/O
FastIO, FastMemoryScan, FastGPUCopy, FastIPC, FastClipboard

### Audio
FastAudioCapture, FastAudio, FastTTS, FastSTT, FastOCR

### Algorithms & Utilities
FastMath, FastSIMD, FastString, FastBytes, FastHash, FastJSON, FastParse, FastRegex, FastSort, FastCompress, FastPathfinder, FastEventBus, FastHookChain, FastDetour, FastThreading, FastBenchmark

### Debugging & Development
FastCallTrace, FastWatch, FastReplay, FastTest

### AI & ML
FastAI, FastAIClient, FastEmbedding, FastVectorDB, FastToolBridge, FastContext, FastMemory, FastRAG, FastMCP

### Platform
FastJava, FastCore, FastPlugin

---

## 📖 Module Details (Why does each module exist?)

### Core (Agent I/O)

| Module | Explanation |
|--------|-------------|
| **[FastRobot](https://github.com/andrestubbe/FastRobot)** | Java's [Robot](https://docs.oracle.com/javase/8/docs/api/java/awt/Robot.html) class is too slow for game bots. FastRobot uses native [SendInput](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-sendinput) with batch processing for 1000+ events in one call - sub-millisecond reaction times. |
| **FastScreen** | Screenshots with [Java.awt](https://docs.oracle.com/javase/8/docs/api/java/awt/package-summary.html) take 50-100ms. FastScreen uses [DXGI Desktop Duplication](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/desktop-duplication-api) for 500-2000 FPS zero-copy capture - essential for vision bots. |
| **FastInput** | Read mouse, keyboard, and [HID](https://en.wikipedia.org/wiki/Human_interface_device) input via [RawInput](https://learn.microsoft.com/en-us/windows/win32/inputdev/raw-input) (non-hooking, non-invasive) for high-frequency input reading. |
| **FastInputHook** | Global hook counterpart to FastInput — captures ALL low-level events ([SetWindowsHookEx](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-setwindowshookexa)) before they reach any application. |
| **FastVision** | [Java2D](https://docs.oracle.com/javase/8/docs/technotes/guides/2d/spec/j2d-intro.html) is too slow for object detection. FastVision uses [GPU compute shaders](https://learn.microsoft.com/en-us/windows/win32/direct3d11/compute-shaders) for <10ms [template matching](https://docs.opencv.org/4.x/d4/dc6/tutorial_py_template_matching.html) and [feature extraction](https://en.wikipedia.org/wiki/Feature_extraction). |
| **[FastHotkey](https://github.com/andrestubbe/FastHotkey)** | Safe, filtered version — only registered combinations are intercepted, without the invasiveness of global hooks. |
| **FastGamepad** | No native controller support in Java. FastGamepad reads [XInput](https://learn.microsoft.com/en-us/windows/win32/xinput/getting-started-with-xinput)/[DirectInput](https://learn.microsoft.com/en-us/previous-versions/windows/desktop/ee416842(v=vs.85)) for racing/fighting game bots. |
| **FastHumanInput** | Unifies all input sources into a single event stream optimized for AI agents and automation pipelines. |

### System & Window

| Module | Explanation |
|--------|-------------|
| **FastWindow** | Java cannot control foreign windows. FastWindow finds, focuses, moves windows via [Win32](https://learn.microsoft.com/en-us/windows/win32/apiindex/windows-api-list) - important for multi-window bots. |
| **FastProcess** | ProcessHandle is too limited. FastProcess reads thread IDs, handle count, real [CPU affinity](https://learn.microsoft.com/en-us/windows/win32/procthread/setting-thread-affinity) for process isolation. |
| **[FastTheme](https://github.com/andrestubbe/FastTheme)** | Java doesn't know Dark Mode. FastTheme reads [Windows 11 theming](https://learn.microsoft.com/en-us/windows/apps/desktop/modernize/apply-windows-themes) (Dark/Light, Accent, Mica) and adapts Java apps. |
| **FastOverlay** | HUDs over games need transparent overlay windows. FastOverlay uses [DirectX](https://learn.microsoft.com/en-us/windows/win32/directx) for ESPs, debug visuals. |
| **FastWindowEvents** | Java gets no events when windows are moved. FastWindowEvents notifies when the target window changes. |
| **FastSystemMetrics** | Mouse speed and drag threshold are only accessible via [Win32](https://learn.microsoft.com/en-us/windows/win32/apiindex/windows-api-list). Important for human-like bot input. |
| **FastDWM** | VSync and frame latency are important for frame-locked rendering. FastDWM reads [Desktop Window Manager](https://learn.microsoft.com/en-us/windows/win32/dwm/dwm-overview) timing. |
| **FastFileWatch** | Java's WatchService is slow and loses events. FastFileWatch uses [ReadDirectoryChangesW](https://learn.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-readdirectorychangesw) for immediate notifications (vs. slow [Java WatchService](https://docs.oracle.com/javase/8/docs/api/java/nio/file/WatchService.html)). |
| **FastProcessWatch** | Watch process start/stop for trigger bots (e.g., "when game starts, activate bot"). |

### Display & Graphics

| Module | Explanation |
|--------|-------------|
| **[FastGraphics](https://github.com/andrestubbe/FastGraphics)** | [Java2D](https://docs.oracle.com/javase/8/docs/technotes/guides/2d/spec/j2d-intro.html) is unsuitable for 60+ FPS. FastGraphics uses [DirectX](https://learn.microsoft.com/en-us/windows/win32/directx)/[Vulkan](https://www.vulkan.org/) for GPU rendering without JVM heap. |
| **[FastImage](https://github.com/andrestubbe/FastImage)** | BufferedImage allocates 200-300MB heap. FastImage uses ByteBuffer off-heap for fast pixel operations. |
| **[FastImageView](https://github.com/andrestubbe/FastImageView)** | JFrame with image is slow. FastImageView renders 1:1 pixels in 200ms startup time for debugging. |
| **FastDisplay** | Displays [framebuffer](https://en.wikipedia.org/wiki/Framebuffer) directly without copy. Foundation for all GPU rendering modules. |
| **FastColorSearch** | Pixel loops in Java are 100x too slow. FastColorSearch uses [SIMD](https://en.wikipedia.org/wiki/SIMD) ([SSE](https://en.wikipedia.org/wiki/Streaming_SIMD_Extensions)/[AVX](https://en.wikipedia.org/wiki/Advanced_Vector_Extensions)) for 10GB/s pattern matching. |

### Data & I/O

| Module | Explanation |
|--------|-------------|
| **[FastIO](https://github.com/andrestubbe/FastIO)** | Java NIO has too much overhead for real-time. FastIO uses unbuffered I/O and [IOCP](https://learn.microsoft.com/en-us/windows/win32/fileio/i-o-completion-ports) for constant latency. |
| **FastMemoryScan** | For modding and reverse engineering: reads foreign process memory for [pattern scans](https://guidedhacking.com/threads/signature-scanning-tutorial.12132/) and [pointer chains](https://guidedhacking.com/threads/pointer-scanning-tutorial.12170/). |
| **FastGPUCopy** | GPU↔CPU transfers are the bottleneck in ML pipelines. FastGPUCopy uses [DMA](https://en.wikipedia.org/wiki/Direct_memory_access) for [zero-copy](https://en.wikipedia.org/wiki/Zero-copy). |
| **FastIPC** | [Shared memory](https://en.wikipedia.org/wiki/Shared_memory) and [named pipes](https://learn.microsoft.com/en-us/windows/win32/ipc/named-pipes) for separation of bot engine and AI model - both run isolated. |
| **[FastClipboard](https://github.com/andrestubbe/FastClipboard)** | Java's Clipboard is buggy. FastClipboard uses native APIs for stable copy/paste. |

### Audio

| Module | Explanation |
|--------|-------------|
| **FastAudioCapture** | [WASAPI](https://learn.microsoft.com/en-us/windows/win32/coreaudio/wasapi) instead of [Java Sound](https://docs.oracle.com/javase/tutorial/sound/). Loopback capture for audio trigger bots. |
| **FastAudio** | Audio output for feedback/voice output. Counterpart to FastAudioCapture. |
| **FastTTS** | Text-to-Speech for voice output. [Piper](https://github.com/rhasspy/piper) (local), [Coqui](https://github.com/coqui-ai/TTS), [ElevenLabs API](https://elevenlabs.io/docs/api-reference), System TTS. For voice bots and accessibility. |
| **FastSTT** | Speech-to-Text for speech recognition. Whisper (local), Vosk, System STT. For voice commands and transcription. |
| **FastOCR** | Read text in screenshots. [Tesseract](https://github.com/tesseract-ocr/tesseract) (local), [ONNX Runtime](https://onnxruntime.ai/) (neural OCR), System OCR. For quest logs, chat messages, UI elements, forms. |

---

### FastTTS (Details)

**APIs:** `speak(text)`, `speak(text, voice)`, `setVoice(id)`, `setRate(speed)`, `setPitch(value)`, `saveToFile(text, path)`, `getVoices()`
**Native:** Windows SAPI, macOS NSSpeechSynthesizer, Linux Speech Dispatcher, [ONNX Runtime](https://onnxruntime.ai/), ggml-TTS ([Piper](https://github.com/rhasspy/piper), [Coqui](https://github.com/coqui-ai/TTS))
**Features:** Low-latency streaming, Voice selection, Local/offline TTS, File output (WAV/MP3)
**Use-Cases:** Voice-Bots, Screenreader, Agent-Feedback, Audio-UI

---

### FastSTT (Details)

**APIs:** `transcribe(audioBuffer)`, `transcribeFile(path)`, `startStreaming(callback)`, `stopStreaming()`, `setModel(model)`, `setLanguage(lang)`
**Native:** [Whisper.cpp](https://github.com/ggerganov/whisper.cpp) (ggml), [ONNX Runtime](https://onnxruntime.ai/), Windows Speech API, macOS Speech Recognition, [Vosk](https://alphacephei.com/vosk/)
**Features:** Streaming STT, Real-time transcription, Multi-language, Noise-reduction
**Use-Cases:** Voice-Commands, Dictation, Voice-Bots, Meeting-Transcription, Audio-Automation

---

### Algorithms & Utilities

| Module | Explanation |
|--------|-------------|
| **[FastMath](https://github.com/andrestubbe/FastMath)** | Auto-optimizer for math functions - generates variants, benchmarks, picks fastest. |
| **FastSIMD** | [SSE](https://en.wikipedia.org/wiki/Streaming_SIMD_Extensions)/[AVX](https://en.wikipedia.org/wiki/Advanced_Vector_Extensions)/[NEON](https://developer.arm.com/architectures/instruction-sets/simd-isas/neon) wrapper for Java. 10x faster for vector operations, pixel processing, physics. |
| **FastString** | Java Strings are immutable and UTF-16. FastString is mutable, UTF-8, zero-copy - for parsing. |
| **FastBytes** | ByteBuffer with String API and SIMD operations. For binary parsing without GC. |
| **FastHash** | [xxHash3](https://github.com/Cyan4973/xxHash)/[BLAKE3](https://github.com/BLAKE3-team/BLAKE3) are 100x faster than SHA-256. For checksums in real-time pipelines. |
| **FastJSON** / **FastParse** | [Jackson](https://github.com/FasterXML/jackson)/[Gson](https://github.com/google/gson) are too slow for high-frequency. FastJSON is zero-copy, 50x faster. |
| **FastRegex** | Java Regex has backtracking problems. FastRegex uses [Hyperscan](https://github.com/intel/hyperscan) engine for SIMD pattern matching. |
| **FastSort** | [Radix Sort](https://en.wikipedia.org/wiki/Radix_sort) is O(n) for integers. 10x faster than Java's Dual-Pivot Quicksort for large arrays. |
| **FastCompress** | [LZ4](https://github.com/lz4/lz4) is 10x faster than gzip. For netcode and log compression where speed matters. |
| **FastPathfinder** | [A*](https://en.wikipedia.org/wiki/A*_search_algorithm) in Java is too slow for large grids. Native implementation for real-time navigation. |
| **FastEventBus** | JNI callbacks are expensive. FastEventBus batches events and uses lock-free queues. |
| **FastHookChain** | Order hooks by priority: Input → PreProcess → AI → Action → PostProcess. |
| **FastDetour** | [Function hooking](https://en.wikipedia.org/wiki/Hooking) for modding and instrumentation. [Trampoline](https://en.wikipedia.org/wiki/Hooking#Trampoline) for original call. |
| **FastThreading** | Java thread pools have too much overhead. Lock-free queues and thread affinity for <1ms latency. |
| **FastBenchmark** | Micro-benchmarks with [QueryPerformanceCounter](https://learn.microsoft.com/en-us/windows/win32/api/profileapi/nf-profileapi-queryperformancecounter). For performance marketing and optimization. |

### Debugging & Development

| Module | Explanation |
|--------|-------------|
| **FastCallTrace** | Who is calling me? [Stack introspection](https://en.wikipedia.org/wiki/Stack_trace) 10x faster than Throwable.getStackTrace(). |
| **FastWatch** | Watch variables in real-time (60-240 Hz) without Swing overhead. For game dev debugging. |
| **FastReplay** | Record and playback input. For UI testing and bot validation. |
| **FastTest** | Combines FastScreen + FastRobot for visual assertions. UI testing engine. |

### AI & ML

| Module | Explanation |
|--------|-------------|
| **FastAI** | One interface for all AI providers (Ollama, OpenAI, Claude). No JSON hassle, just prompts. |
| **FastAIClient** | Provider-specific implementations behind FastAI interface. |
| **FastEmbedding** | Local embeddings with [ggml](https://github.com/ggerganov/ggml). For RAG without cloud dependency. |
| **FastVectorDB** | In-process vector database for [KNN search](https://en.wikipedia.org/wiki/K-nearest_neighbors_algorithm). For semantic search and RAG retrieval. |
| **FastToolBridge** | AI models can call Fast* modules directly. MCP-compatible for agents. |
| **FastContext** | Agent memory with profiles and long-term knowledge. For personalized AI agents. |
| **FastMemory** | Persistent embedding-based agent memory. Stores facts with automatic summarization and retrieval. Uses FastEmbedding + FastVectorDB. |
| **FastRAG** | Complete [RAG](https://en.wikipedia.org/wiki/Retrieval-augmented_generation) pipeline for local and cloud models. Chunking, embedding, vector search, context injection in one module. |
| **FastMCP** | [MCP](https://modelcontextprotocol.io/) (Model Context Protocol) for FastAI. Connects tools, memory, RAG, files via MCP servers with FastAI as model backend. |

### Platform

| Module | Explanation |
|--------|-------------|
| **FastJava** | The overarching ecosystem. Meta-module for all 67 modules. |
| **[FastCore](https://github.com/andrestubbe/FastCore)** | Unified JNI Loader. Loads all DLLs, manages versions, error translation. |
| **FastPlugin** | Plugin system for 3rd-party modules. Hot-reload and API registry. |

---

## 🎯 Architecture Philosophy: Input vs Output

FastJava separates modules by **direction**, not by device type:

| Direction | Meaning | Modules |
|-----------|---------|---------|
| **Input** | "I read what the user does" | FastInput, FastScreen, FastTouch, FastStylus, FastGamepad |
| **Output** | "I control the PC" | FastRobot |
| **Both** | Bidirectional devices | FastTouch, FastStylus, FastGamepad |

### Why mouse + keyboard stay together

Windows **RawInput API** delivers mouse and keyboard in the **same callback loop**. Splitting them would require:
- Two JNI bridges
- Two message loops  
- Two event queues
- Double the maintenance

**Violation of:** `minimal, deterministic, zero-bullshit`

### Modules by technology, not device

| Module | Technology | Why separate? |
|--------|------------|---------------|
| FastInput | [RawInput](https://learn.microsoft.com/en-us/windows/win32/inputdev/raw-input), Hooks | Reads user input |
| FastRobot | [SendInput](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-sendinput), [DirectInput](https://learn.microsoft.com/en-us/previous-versions/windows/desktop/ee416842(v=vs.85)) | Sends output to PC |
| **[FastTouch](https://github.com/andrestubbe/FastTouch)** | [Windows Pointer API](https://learn.microsoft.com/en-us/windows/win32/wintouch/windows-touch-gestures-overview) | Touch injection + multi-point |
| FastStylus | [Pointer API](https://learn.microsoft.com/en-us/windows/win32/wintouch/windows-touch-gestures-overview) (Pen) | Pressure, tilt, eraser |
| FastGamepad | [XInput](https://learn.microsoft.com/en-us/windows/win32/xinput/getting-started-with-xinput)/[DirectInput](https://learn.microsoft.com/en-us/previous-versions/windows/desktop/ee416842(v=vs.85)) | Controller, rumble |
| FastScreen | [DXGI Desktop Duplication](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/desktop-duplication-api) | Zero-copy capture |

Only **fundamentally different technologies** get separate modules.

---

## 🧩 Architecture Layers

> Architecture Layers list modules only. Detailed descriptions are in [Module Details](#-module-details).

```
┌─────────────────────────────────────────────────────────────────────────────┐
│                              AI / AGENT LAYER                               │
│  FastAI • FastToolBridge • FastContext • FastEmbedding • FastVectorDB       │
└─────────────────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────────────────┐
│                         HIGH-LEVEL AUTOMATION LAYER                         │
│  FastRobot • FastInput • FastInputHook • FastHotkey • FastGamepad • FastHumanInput |
│  FastScreen • FastVision • FastOCR • FastAudioCapture                       │
└─────────────────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────────────────┐
│                         RENDERING & GRAPHICS LAYER                          │
│  FastGraphics • FastOverlay • FastImage • FastImageView • FastDisplay       │
│  FastColorSearch                                                            │
└─────────────────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────────────────┐
│                           SYSTEM & WINDOW LAYER                             │
│  FastWindow • FastProcess • FastTheme • FastWindowEvents                    │
│  FastSystemMetrics • FastDWM • FastFileWatch • FastProcessWatch           │
└─────────────────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────────────────┐
│                            DATA & MEMORY LAYER                            │
│  FastIO • FastMemoryScan • FastGPUCopy • FastClipboard • FastIPC          │
└─────────────────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────────────────┐
│                          ALGORITHMS & UTILITIES                             │
│  FastMath • FastSIMD • FastString • FastBytes • FastHash                   │
│  FastJSON • FastRegex • FastSort • FastCompress • FastPathfinder           │
│  FastEventBus • FastHookChain • FastDetour • FastThreading • FastBenchmark │
└─────────────────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────────────────┐
│                           DEBUGGING & TESTING                               │
│  FastCallTrace • FastWatch • FastReplay • FastTest                          │
└─────────────────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────────────────┐
│                                  AUDIO LAYER                                │
│  FastAudioCapture • FastAudio                                               │
└─────────────────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────────────────┐
│                               PLATFORM LAYER                                │
│  FastJava • FastCore • FastPlugin                                           │
└─────────────────────────────────────────────────────────────────────────────┘
```

---

## 🧠 Vision

FastJava is the foundation for:

- **Autonomous Agents**
- **Game Bots**
- **Vision Bots**
- **UI Automation**
- **AI Tools**
- **Native-Speed Java Apps**

Java finally gets what Python, C++, and Rust have long had: **direct access to the operating system** — without overhead.

---

## 📜 License

MIT (planned)

---

---

# 🔗 Dependency-Graph (complete)

## Foundational Layer (0 deps)

| Module | Dependencies |
|-------|-------------|
| FastCore | — |
| FastJava | — |
| FastPlugin | — |

## Low-Level Native Utils (1–2 deps)

| Module | Dependencies |
|-------|-------------|
| FastString | FastBytes |
| FastBytes | FastCore |
| FastHash | FastBytes |
| FastSIMD | FastCore |
| FastJSON / FastParse | FastString, FastBytes |
| FastRegex | FastSIMD |
| FastSort | FastSIMD |
| FastCompress | FastBytes |
| FastBenchmark | FastCore |
| FastThreading | FastCore |

## System Layer (requires FastCore)

| Module | Dependencies |
|-------|-------------|
| FastWindow | FastCore |
| FastProcess | FastCore |
| FastSystemMetrics | FastCore |
| FastDWM | FastCore |
| FastFileWatch | FastCore |
| FastProcessWatch | FastCore, FastProcess |
| FastTheme | FastWindow |

## Graphics Layer

| Module | Dependencies |
|-------|-------------|
| FastGraphics | FastCore |
| FastImage | FastBytes |
| FastImageView | FastGraphics |
| FastDisplay | FastGraphics |
| FastColorSearch | FastSIMD |
| FastOverlay | FastGraphics |

## I/O Layer

| Module | Dependencies |
|-------|-------------|
| FastIO | FastCore |
| FastImage | FastCore |
| FastMemoryScan | FastProcess |
| FastGPUCopy | FastCore |
| FastIPC | FastCore |
| FastClipboard | FastCore |

## Input/Output Layer

| Module | Dependencies |
|-------|-------------|
| FastRobot | FastCore |
| FastScreen | FastGraphics |
| FastInputHook | FastCore |
| FastHotkey | FastCore |
| FastGamepad | FastCore |
| FastHumanInput | FastInputHook, FastGamepad |
| FastVision | FastScreen, FastGraphics |
| FastAudioCapture | FastCore |
| FastAudio | FastCore |
| FastOCR | FastImage |

## AI Layer

| Module | Dependencies |
|-------|-------------|
| FastAI | FastCore |
| FastAIClient | FastAI |
| FastEmbedding | FastBytes |
| FastVectorDB | FastEmbedding |
| FastToolBridge | FastAI |
| FastContext | FastEmbedding, FastVectorDB |

## Debug Layer

| Module | Dependencies |
|-------|-------------|
| FastCallTrace | FastCore |
| FastWatch | FastGraphics |
| FastReplay | FastRobot, FastScreen |
| FastTest | FastRobot, FastScreen, FastVision |

---

---

# 🗺️ Roadmap 2026–2028

**Prioritized by:** Impact × Dependencies × Difficulty × Marketing/SEO Value

---

## 2026 – Foundation & Core Modules

### 🔥 Highest Priority

| Module | Impact | Dependencies | Status |
|--------|--------|--------------|--------|
| FastCore | 10/10 | 0 | ✅ Released v1.0.0 |
| FastRobot | 10/10 | FastCore | ✅ Expanding |
| FastGraphics | 10/10 | FastCore | 🔄 Completing |
| FastTheme | 9/10 | FastWindow | ✅ Released v1.2.0 |
| FastImage | 8/10 | FastCore | 🚧 Beta v1.0.0 |
| FastScreen | 9/10 | FastGraphics | 📝 Extract from FastRobot |

### 🎯 Deliverables 2026

- [ ] Official FastJava Website (GitHub Pages)
- [ ] 10+ Demos (Vision, Input, Rendering)
- [ ] First AI Integration (FastAI v0.1)
- [ ] FastJava 1.0 Release Candidate
- [ ] JitPack / Maven Central Setup

---

## 2027 – Vision, AI, System

### 🔥 Highest Priority

| Module | Impact | Dependencies | Use-Case |
|--------|--------|--------------|----------|
| FastVision | 10/10 | FastScreen, FastGraphics | GPU Vision Pipeline |
| FastOCR | 8/10 | FastImage | UI Text Reading |
| FastAudioCapture | 7/10 | FastCore | Audio Trigger Bots |
| FastWindowEvents | 7/10 | FastCore | Adaptive Bots |
| FastProcessWatch | 6/10 | FastProcess | Process Monitoring |
| FastGPUCopy | 8/10 | FastCore | ML Pipelines |

### 🎯 Deliverables 2027

- [ ] Vision Bots (Screen → AI → Action)
- [ ] Audio Trigger Bots
- [ ] Full Agent Integration (FastToolBridge + FastContext)
- [ ] FastJava 2.0 Release

---

## 2028 – Ecosystem, Plugins, Advanced Utils

### 🔥 Highest Priority

| Module | Impact | Dependencies | Use-Case |
|--------|--------|--------------|----------|
| FastPlugin | 9/10 | FastCore | Plugin Ecosystem |
| FastVectorDB | 8/10 | FastEmbedding | RAG in Java |
| FastEmbedding | 7/10 | FastBytes | Local Embeddings |
| FastDetour | 6/10 | FastCore | Function Hooking |
| FastPathfinder | 6/10 | FastSIMD | Game Bot Navigation |
| FastReplay / FastTest | 7/10 | FastRobot, FastScreen | UI Testing Engine |

### 🎯 Deliverables 2028

- [ ] Plugin Ecosystem (3rd-Party Modules)
- [ ] AI Agents with Tool-Calling
- [ ] Native-Speed RAG in Java
- [ ] FastJava 3.0 Release

---

---

## 📊 Overall Statistics

| Category | Count | Released | WIP | Concept |
|----------|-------|----------|-----|---------|
| **Core (Agent I/O)** | 7 | 3 (FastCore, FastRobot, FastHotkey) | 0 | 4 |
| **System & Window** | 9 | 1 (FastTheme) | 0 | 8 |
| **Display & Graphics** | 5 | 1 (FastClipboard) | 1 (FastGraphics) | 3 |
| **Data & I/O** | 5 | 0 | 0 | 5 |
| **Audio** | 4 | 0 | 0 | 4 |
| **Algorithms & Utils** | 15 | 0 | 0 | 15 |
| **Debugging & Testing** | 4 | 0 | 0 | 4 |
| **AI & ML** | 9 | 0 | 0 | 9 |
| **Platform** | 3 | 0 | 0 | 3 |
| **Total** | **67** | **4** | **1** | **62** |

---

*Generated: 2026-04-13 | FastJava MAP v2.2 (67 Module)*
