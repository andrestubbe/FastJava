# ⚡ FastJava — Native Java Performance Ecosystem [ALPHA]

> **5-50× faster than standard Java** — JNI-native libraries for automation, screen capture, graphics, math, JSON, and more.

---

[![Premium Overlay Showcase](docs/screenshot.png)
](https://www.youtube.com/watch?v=b3X2zFjV6GU&list=PL-mASGDMkCUqJ0bXAJP28ykqPP9RqMMsA)

---

## 🗺️ The Ecosystem Map

A unified directory of all FastJava modules. Categorized by functional domain, including real-world performance benchmarks.

### 1. Input
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastHotkey](https://github.com/andrestubbe/fasthotkey)** | **❌ Java can't** | Global hotkeys — no Java API | Win32 hooks | Alpha | `v0.1.0` |
| **[FastKeyboard](https://github.com/andrestubbe/FastKeyboard)** | **16×** | RawInput vs standard AWT KeyListener | RawInput API | Alpha | `v0.1.0` |
| **[FastTouch](https://github.com/andrestubbe/fasttouch)** | **❌ Java can't** | Multi-touch pressure — no Java API | Win32 touch | Alpha | `v0.1.0` |
| **[FastStylus](https://github.com/andrestubbe/faststylus)** | **❌ Java can't** | Pen tilt/eraser — no Java API exists | WM_POINTER | Alpha | `v0.1.0` |
| **[FastKeylogger](https://github.com/andrestubbe/FastKeylogger)** | **—** | Global asynchronous keyboard tracking | Win32 Hooks | Alpha | `v0.1.2` |
| **[FastMouse](https://github.com/andrestubbe/FastMouse)** | **—** | Raw mouse reading | RawInput API | Alpha | `v0.1.0` |
| FastGamepad | — | Controller support | XInput | TODO | — |

### 2. Output
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastDWM](https://github.com/andrestubbe/FastDWM)** | **—** | VSync & timing | DWM API | Alpha | `v0.1.0` |
| **[FastDisplay](https://github.com/andrestubbe/FastDisplay)** | **Instant** | Native DPI/resolution/refresh-rate | Win32, DWM | Alpha | `v0.2.0` |

### 3. Automation
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastRobot](https://github.com/andrestubbe/fastrobot)** | **10-17×** | DirectX capture vs AWT Robot | DirectX | Alpha | `v0.1.0` |
| **[FastUIA](https://github.com/andrestubbe/fastuia)** | **❌ Java can't** | Native UIA vs slow polling | Native UIA | Alpha | `v0.1.0` |
| **[FastWindow](https://github.com/andrestubbe/FastWindow)** | **8×** | Flicker-free resize vs standard JFrame | Win32 API | Alpha | `v0.1.0` |
| **[FastScrape](https://github.com/andrestubbe/FastScrape)** | **—** | High-performance DOM scraping | Native HTML | Alpha | `v0.1.0` |
| **[FastSpider](https://github.com/andrestubbe/FastSpider)** | **—** | Asynchronous high-speed web crawler | NIO / Async | Alpha | `v0.1.0` |
| FastProcess | — | Process management | Win32 API | TODO | — |
| FastScheduler | — | Task scheduler | Priority queue | TODO | — |

### 4. Graphics
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastGhostMouse](https://github.com/andrestubbe/FastGhostMouse)** | **120Hz GPU** | Secondary mouse overlay | DComposition | Alpha | `v0.1.0` |
| **[FastThumb](https://github.com/andrestubbe/FastThumb)** | **—** | Native OS thumbnail extraction | Windows Shell | Alpha | `v0.1.0` |
| **[FastPreview](https://github.com/andrestubbe/FastPreview)** | **—** | Native rasterization vs slow Swing | PDFium, WV2 | Alpha | `v0.1.1` |
| **[FastScreen](https://github.com/andrestubbe/fastscreen)** | **500-2000 FPS** | DXGI zero-copy vs 60 FPS Robot | DXGI, DX | Alpha | `v1.0.0-SNAPSHOT` |
| **[FastOverlay](https://github.com/andrestubbe/FastOverlay)** | **—** | Game overlays | DirectX | Alpha | `v0.1.0` |
| **[FastImage](https://github.com/andrestubbe/fastimage)** | **10-50×** | SIMD resize/blur vs BufferedImage | SIMD, AVX2 | Alpha | `v0.1.1` |
| **[FastImageView](https://github.com/andrestubbe/fastimageview)** | **10×** | 200ms startup vs 2s Swing | DirectX | Alpha | `v0.1.0` |
| **[FastGraphics](https://github.com/andrestubbe/fastgraphics)** | **600%** | GPU DirectX vs Java2D software | DirectX, GPU | Alpha | `v1.0.0` |
| **[FastSoftware3D](https://github.com/andrestubbe/FastSoftware3D)** | **—** | Software 3D rendering pipeline | AVX2 SIMD | Alpha | `v0.1.0` |

### 5. Audio
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastAudioCapture](https://github.com/andrestubbe/FastAudioCapture)** | **❌ No WASAPI** | Real-time capture vs Java Sound | WASAPI, AVX2 | Alpha | `v0.1.1` |
| **[FastAudioPlayer](https://github.com/andrestubbe/FastAudioPlayer)** | **20-30×** | Low-latency playback vs Java Sound | WASAPI, AVX2 | Alpha | `v0.1.2` |
| **[FastAudioProcess](https://github.com/andrestubbe/FastAudioProcess)** | **—** | Audio processing & formant analysis | WASAPI / DSP | Alpha | `v0.1.1` |
| **[FastWakeWord](https://github.com/andrestubbe/FastWakeWord)** | **—** | Always-on native wake-word detection | Audio DSP | Alpha | `v0.1.0` |
| **[FastTTS](https://github.com/andrestubbe/FastTTS)** | **—** | Text-to-speech | SIMD, Piper/Cloud | Alpha | `v0.1.2` |
| **[FastSTT](https://github.com/andrestubbe/FastSTT)** | **—** | Speech-to-text | Whisper | Alpha | `v0.1.2` |

### 6. Parsing
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastBytes](https://github.com/andrestubbe/fastbytes)** | **2-50×** | AVX2 bulk ops vs standard Java | SIMD, AVX2 | Alpha | `v0.1.1` |
| **[FastBinary](https://github.com/andrestubbe/FastBinary)** | **—** | Zero-bloat bit-packing, VarInt & endianness | Zero-Alloc | Alpha | `v0.1.0` |
| **[FastJSON](https://github.com/andrestubbe/fastjson)** | **50×** | 50× faster than Jackson/Gson | SIMD, Zero-GC| Alpha | `v0.1.3` |
| **[FastString](https://github.com/andrestubbe/faststring)** | **10-100×** | UTF-8 ops vs Java String | SIMD, UTF-8 | Alpha | `v0.1.1` |
| **[FastANSI](https://github.com/andrestubbe/FastANSI)** | **45-48×** | Zero-allocation ANSI state parser | State Machine | Alpha | `v0.1.2` |
| **[FastASCII](https://github.com/andrestubbe/FastASCII)** | **—** | Zero-allocation ASCII & UTF-8 byte engine | SIMD, Byte | Alpha | `v0.1.0` |
| **[FastContentParse](https://github.com/andrestubbe/FastContentParse)** | **—** | Standardized content normalization & extraction | Parser | Alpha | `v0.1.3` |
| **[FastEmojis](https://github.com/andrestubbe/FastEmojis)** | **34-56×** | Zero-allocation Emoji width engine | East Asian Width | Alpha | `v0.1.0` |
| **[FastTokenize](https://github.com/andrestubbe/FastTokenize)** | **Sub-µs** | $O(n)$ multi-language scanner & style stream | Zero-Alloc | Alpha | `v0.1.0` |
| FastHTML | — | HTML parser | SIMD | TODO | — |
| FastRegex | — | SIMD regex engine | AVX2 | TODO | — |

### 7. Math
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastFloat](https://github.com/andrestubbe/fastfloat)** | **5-12×** | SIMD parsing vs Float.parseFloat() | SIMD, AVX2 | Alpha | `v0.1.1` |
| **[FastMath](https://github.com/andrestubbe/fastmath)** | **3-8×** | JNI SIMD + OpenCL GPU vs java.lang.Math| OpenCL, SIMD | Alpha | `v0.1.0` |

### 8. Filesystem
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastIO](https://github.com/andrestubbe/fastio)** | **2.5-11×** | AVX2 Search, DMA Copy, mmap | AVX2, DMA | Alpha | `v0.1.1` |
| **[FastFileFormat](https://github.com/andrestubbe/FastFileFormat)** | **—** | Dual text/binary streaming format with aliases | Binary / Text | Alpha | `v0.1.0` |
| **[FastFileIndex](https://github.com/andrestubbe/FastFileIndex)** | **8×** | Native mmap scan vs Files.walk() | mmap, scan | Alpha | `v0.1.1` |
| **[FastFileWatch](https://github.com/andrestubbe/FastFileWatch)** | **10-100×** | USN Journal vs WatchService | USN Journal | Alpha | `v0.1.0` |
| **[FastFileSearch](https://github.com/andrestubbe/FastFileSearch)** | **100-1000×** | Indexed trie vs linear search | Prefix trie | Alpha | `v0.1.0` |
| FastFileSystem | — | Index + Search + Watch in one API | Unified API | TODO | — |
| **[FastFileScrape](https://github.com/andrestubbe/FastFileScrape)** | **5–10×** | Native file scraping vs Java IO | Tree + Content | Alpha | `v1.0-SNAPSHOT` |
| **[FastGLOB](https://github.com/andrestubbe/FastGLOB)** | **13×** | Native Win32 globbing vs PathMatcher | Win32, C++ | Alpha | `v0.1.0` |
| FastFileContentIndex | — | High-speed in-file text indexing | SIMD | TODO | — |
| **[FastCompress](https://github.com/andrestubbe/FastCompress)** | **—** | Ultra-fast native compression | SIMD, AVX2 | Alpha | `v0.1.1` |

### 9. System
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastCore](https://github.com/andrestubbe/fastcore)** | **—** | Cross-platform DLL loader | JNI Loader | Alpha | `v0.1.0` |
| **[FastHardware](https://github.com/andrestubbe/FastHardware)** | **—** | Global hardware telemetry | PDH/WMI | TODO | `v0.1.0` |
| **[FastClipboard](https://github.com/andrestubbe/fastclipboard)** | **2-3×** | Native vs AWT, zero bugs | Win32 API | Alpha | `v0.1.0` |
| **[FastMemory](https://github.com/andrestubbe/FastMemory)** | **—** | SIMD 32-byte aligned RAM & page locking | Unsafe, Win32 | Alpha | `v0.1.1` |
| **[FastPointer](https://github.com/andrestubbe/FastPointer)** | **—** | Zero-overhead native address arithmetic | JNI / Direct | Alpha | `v0.1.1` |
| **[FastSharedMemory](https://github.com/andrestubbe/FastSharedMemory)** | **—** | Zero-copy IPC memory mapped files | Win32 IPC | Alpha | `v0.1.1` |
| **[FastSIMD](https://github.com/andrestubbe/FastSIMD)** | **—** | Hardware SIMD vectorization | AVX2, NEON | Alpha | `v0.1.3` |

### 10. Network
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| FastNet | — | Network operations | Zero-copy | TODO | — |
| FastDNS | — | DNS resolver | Async | TODO | — |
| FastTLS | — | TLS/HTTPS | OpenSSL | TODO | — |

### 11. Security
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| FastCrypto | — | Encryption | AES/SIMD | TODO | — |
| FastSecureRandom | — | Secure RNG | Hardware | TODO | — |
| FastKeychain | — | Credential store | Windows | TODO | — |

### 12. AI
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastAI](https://github.com/andrestubbe/FastAI)** | **—** | Unified provider routing & LLM client layer | Multi-Provider | Alpha | `v0.1.5` |
| **[FastAIAgent](https://github.com/andrestubbe/FastAIAgent)** | **—** | Autonomous agent logic, tools & planning | Agent Loop | Alpha | `v0.1.5` |
| **[FastAIBot](https://github.com/andrestubbe/FastAIBot)** | **—** | High-performance bot orchestrator | LLM / Runtime | Alpha | `v0.1.2` |
| **[FastAIRuntime](https://github.com/andrestubbe/FastAIRuntime)** | **—** | Deterministic execution engine & FastAIEventBus | Runtime | Alpha | `v0.1.0` |
| **[FastAIModel](https://github.com/andrestubbe/FastAIModel)** | **—** | Local ONNX & GGUF matrix inference runtime | ONNX / DirectML | Alpha | `v0.1.2` |
| **[FastAIRag](https://github.com/andrestubbe/FastAIRag)** | **—** | High-speed retrieval augmented generation pipeline | RAG / Hybrid | Alpha | `v0.1.1` |
| **[FastAIMemory](https://github.com/andrestubbe/FastAIMemory)** | **—** | Short-term & long-term conversational memory | Context Store | Alpha | `v0.1.3` |
| **[FastAIVectorDB](https://github.com/andrestubbe/FastAIVectorDB)** | **—** | Zero-allocation vector database with built-in Embedder | AVX2 / JNI | Alpha | `v0.1.4` |
| **[FastAIMCP](https://github.com/andrestubbe/FastAIMCP)** | **—** | Model Context Protocol client & stdio tool bridge | MCP | Alpha | `v0.1.0` |
| **[FastAIReasoner](https://github.com/andrestubbe/FastAIReasoner)** | **—** | Multi-step reasoning, CoT & heuristic planning | Tree-of-Thoughts | Alpha | `v0.1.0` |
| **[FastAIGraph](https://github.com/andrestubbe/FastAIGraph)** | **—** | In-memory knowledge graph & multi-hop traversal | Entity Linking | Alpha | `v0.1.0` |
| **[FastAIRerank](https://github.com/andrestubbe/FastAIRerank)** | **—** | Cross-encoder relevance scoring & ranking | Reranker | Alpha | `v0.1.0` |
| **[FastAIHybrid](https://github.com/andrestubbe/FastAIHybrid)** | **—** | Hybrid dense & sparse retrieval fusion | Fusion Engine | Alpha | `v0.1.0` |
| **[FastAIState](https://github.com/andrestubbe/FastAIState)** | **—** | Lock-free shared agent state & blackboard memory | Shared Memory | Alpha | `v0.1.1` |
| **[FastAIMetrics](https://github.com/andrestubbe/FastAIMetrics)** | **—** | Token usage, latency profiling, cost & evaluation | Telemetry / VarInt | Alpha | `v0.1.0` |
| **[FastAIVision](https://github.com/andrestubbe/FastAIVision)** | **—** | Local multimodal vision & UI grounding pipeline | Qwen2-VL / SmolVLM | Alpha | `v0.1.0` |
| **[FastAIMatcher](https://github.com/andrestubbe/FastAIMatcher)** | **—** | Automated SOX compliance & hybrid rule matching | Rule Engine / VarInt | Alpha | `v0.1.0` |

### 13. Vision
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastCamera](https://github.com/andrestubbe/FastCamera)** | **—** | Native low-latency webcam capture | DirectShow | Alpha | `v0.1.0` |
| **[FastOCR](https://github.com/andrestubbe/FastOCR)** | **10× faster** | WinRT OCR vs Tesseract4J | WinRT OCR | Alpha | `v0.1.0` |
| FastVision | — | Vision-Modelle / GPU-Kernels | GPU shaders | TODO | — |

### 14. Animation
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastTween](https://github.com/andrestubbe/fasttween)** | **Zero overhead** | No built-in tweening | Pool | Alpha | `v0.1.0` |
| **[FastAnimation](https://github.com/andrestubbe/fastanimation)** | **Zero overhead** | No built-in timelines — pure Java | Timeline | Alpha | `v0.1.0` |

### 15. UI
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastTheme](https://github.com/andrestubbe/fasttheme)** | **❌ Java can't** | Native Windows theming | WinRT, DWM | Alpha | `v0.1.2` |
| **[FastUI](https://github.com/andrestubbe/FastUI)** | **—** | Core UI building blocks | Native | Alpha | `v0.1.1` |
| **[FastProportion](https://github.com/andrestubbe/FastProportion)** | **—** | Proportional layout engine | Core | Alpha | `v0.1.0` |
| **[FastGrid](https://github.com/andrestubbe/FastGrid)** | **—** | High-performance grid layout | Core | Alpha | `v0.1.0` |
| **[FastNotification](https://github.com/andrestubbe/fastnotification)** | **❌ Broken** | SystemTray broken → native WinRT | WinRT, Toast| Alpha | `v0.1.0` |
| **[FastConPTY](https://github.com/andrestubbe/FastConPTY)** | **—** | Native Windows ConPTY connector | Win32 PTY | Alpha | `v0.1.0` |
| **[FastTerminal](https://github.com/andrestubbe/FastTerminal)** | **❌ Java can't** | Double-buffered TUI blitting | Win32 console, JNI | Alpha | `v0.1.11` |
| **[FastTerminal3D](https://github.com/andrestubbe/FastTerminal3D)** | **—** | 3D terminal renderer for Java | Terminal | Alpha | `v0.1.0` |
| **[FastTUI](https://github.com/andrestubbe/FastTUI)** | **—** | Terminal UI framework for Java | Win32 Console | Alpha | `v0.1.3` |

### 16. Compute
| Module | Speed vs Java | Key Metrics | Tech | Status | Version |
|--------|---------------|-------------|------|--------|---------|
| **[FastGPU](https://github.com/andrestubbe/FastGPU)** | **50–500×** | GPU Compute, SPIR-V, Vulkan Compute, Zero-Copy Buffers | Vulkan, SPIR-V, OpenCL | Alpha | `v0.1.0` |

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

- ✅ **72 Active Repositories** — Available now on GitHub & JitPack
- 🚧 **Coming Soon** — Audio, Vision, AI, Advanced System (2026-2027)
- 🔄 **Planned** — Full 80+ module pipeline
- ✅ Windows fully supported — Linux/macOS in progress

---

**Part of the FastJava Ecosystem** — *Making the JVM faster. Small package. Maximum speed. Zero bloat. 🚀📋*

