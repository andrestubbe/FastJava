# FastJava Ecosystem Directory & Performance Matrix 🗺️

> **Complete catalogue of all FastJava modules, performance characteristics, native technologies, and development status.**

**Status:** Alpha · Windows-first · Linux/macOS in progress  
**Benchmarks:** Measured on real hardware (no synthetic marketing numbers)

---

## 🏛️ Architecture & Core Tenets

FastJava is not a framework — it is a modular, full-stack performance ecosystem. 

Each module targets a specific boundary layer where Java SE abstracts, stalls, or lacks native OS capabilities entirely. The architecture spans 16 functional domains:

```
┌────────────────────────────────────────────────────────────────────────┐
│                        FastJava User Application                       │
├───────────────────┬───────────────────┬────────────────────────────────┤
│   Input & UI      │    Data & Text    │        AI & Automation         │
│  FastHotkey       │  FastJSON         │  FastAI / FastAIAgent          │
│  FastKeyboard     │  FastString       │  FastAIVectorDB                │
│  FastWindow       │  FastBytes        │  FastAIMemoryGraph             │
├───────────────────┴───────────────────┴────────────────────────────────┤
│                       Hardware & Media Engines                         │
│  FastScreen & FastScreenCapture (DXGI Desktop Duplication)             │
│  FastAudioCapture & FastAudioPlayer (WASAPI Hardware DSP)              │
│  FastGraphics & FastOverlay (DirectX 11 / Vulkan Compute)              │
├────────────────────────────────────────────────────────────────────────┤
│                       Off-Heap Foundation Layer                        │
│  FastMemory (32-Byte Aligned RAM) │ FastPointer (Direct Address Math) │
│  FastSIMD (AVX2 / AVX-512)        │ FastCore (Native DLL Auto-Loader)  │
└────────────────────────────────────────────────────────────────────────┘
```

### Capability & Benchmark Notes
- **"Not available via standard Java SE"**: Indicates capabilities (such as global unfocused hotkeys, raw pen pressure, or hardware desktop duplication) that Java SE provides no standard API for.
- **Reported Performance / Capability**: Benchmark metrics measured against standard Java equivalents (e.g. `java.awt.Robot`, `java.lang.Math`, `java.lang.String`, or Jackson/Gson). Figures are measured on real hardware configurations for orientation.

---

## 1. Input

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastHotkey](https://github.com/andrestubbe/fasthotkey)** | **Not available via standard Java SE** | Global system-wide hotkeys when unfocused | Win32 low-level hooks | Alpha | `v0.1.0` |
| **[FastKeyboard](https://github.com/andrestubbe/FastKeyboard)** | **16× faster** | RawInput vs standard AWT KeyListener | RawInput API | Alpha | `v0.1.0` |
| **[FastTouch](https://github.com/andrestubbe/fasttouch)** | **Not available via standard Java SE** | Multi-touch pressure & contact geometry | Win32 Touch API | Alpha | `v0.1.0` |
| **[FastStylus](https://github.com/andrestubbe/faststylus)** | **Not available via standard Java SE** | Pen tilt, eraser & barrel pressure | WM_POINTER | Alpha | `v0.1.0` |
| **[FastKeylogger](https://github.com/andrestubbe/FastKeylogger)** | **Near-zero overhead** | Asynchronous low-level keyboard tracking | Win32 Hooks | Alpha | `v0.1.2` |
| **[FastMouse](https://github.com/andrestubbe/FastMouse)** | **Sub-millisecond** | High-precision raw mouse polling | RawInput API | Alpha | `v0.1.0` |
| FastGamepad | — | Direct controller support | XInput | TODO | — |

---

## 2. Output

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastDWM](https://github.com/andrestubbe/FastDWM)** | **Not available via standard Java SE** | Native Desktop Window Manager VSync & timing | DWM API | Alpha | `v0.1.0` |
| **[FastDisplay](https://github.com/andrestubbe/FastDisplay)** | **Instant** | Native per-monitor DPI, resolution & refresh rates | Win32, DWM | Alpha | `v0.2.0` |

---

## 3. Automation

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastRobot](https://github.com/andrestubbe/fastrobot)** | **10–17× faster** | DirectX hardware capture vs `java.awt.Robot` | DirectX 11 | Alpha | `v0.1.0` |
| **[FastUIA](https://github.com/andrestubbe/fastuia)** | **Not available via standard Java SE** | Native Windows UI Automation vs slow polling | Native UIA COM | Alpha | `v0.1.0` |
| **[FastWindow](https://github.com/andrestubbe/FastWindow)** | **8× faster** | Flicker-free native resize vs standard JFrame | Win32 API | Alpha | `v0.1.0` |
| **[FastScrape](https://github.com/andrestubbe/FastScrape)** | **Near-zero allocations** | High-performance DOM scraping | Native HTML Parser | Alpha | `v0.1.1` |
| **[FastSpider](https://github.com/andrestubbe/FastSpider)** | **High throughput** | Asynchronous high-speed web crawler | NIO / Async | Alpha | `v0.1.1` |
| FastProcess | — | Native process management & tree kill | Win32 API | TODO | — |
| FastScheduler | — | High-resolution microsecond task scheduler | Priority Queue | TODO | — |

---

## 4. Graphics & Screen

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastScreenCapture](https://github.com/andrestubbe/FastScreenCapture)** | **Instant / 60 FPS** | Bit-perfect uncompressed BMP & direct FFmpeg video pipe | DXGI / NIO DMA | Alpha | `v0.1.1` |
| **[FastScreen](https://github.com/andrestubbe/fastscreen)** | **500–2000 FPS** | DXGI zero-copy capture vs 60 FPS Robot | DXGI 1.2+ / D3D11 | Alpha | `v0.1.4` |
| **[FastGhostMouse](https://github.com/andrestubbe/FastGhostMouse)** | **120Hz GPU** | Zero-lag secondary mouse cursor overlay | DirectComposition | Alpha | `v0.1.0` |
| **[FastThumb](https://github.com/andrestubbe/FastThumb)** | **Sub-millisecond** | Native OS thumbnail extraction | Windows Shell | Alpha | `v0.1.0` |
| **[FastPreview](https://github.com/andrestubbe/FastPreview)** | **Native speed** | Fast rasterization vs slow Swing preview | PDFium, WebView2 | Alpha | `v0.1.1` |
| **[FastOverlay](https://github.com/andrestubbe/FastOverlay)** | **Hardware VSync** | Seamless transparent game overlays | DirectX 11 | Alpha | `v0.1.0` |
| **[FastImage](https://github.com/andrestubbe/fastimage)** | **10–50× faster** | SIMD resize, blur & convert vs BufferedImage | SIMD, AVX2 | Alpha | `v0.1.4` |
| **[FastImageView](https://github.com/andrestubbe/fastimageview)** | **10× faster startup** | 200ms instant view vs 2s Swing frame | DirectX | Alpha | `v0.1.0` |
| **[FastGraphics](https://github.com/andrestubbe/fastgraphics)** | **600% throughput** | GPU DirectX 2D vs Java2D software blits | DirectX, GPU | Alpha | `v1.0.0` |
| **[FastSoftware3D](https://github.com/andrestubbe/FastSoftware3D)** | **High FPS** | Software 3D rendering pipeline | AVX2 SIMD | Alpha | `v0.1.0` |

---

## 5. Audio

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastAudioCapture](https://github.com/andrestubbe/FastAudioCapture)** | **Not available via standard Java SE** | Real-time WASAPI hardware loopback vs Java Sound | WASAPI, AVX2 | Alpha | `v0.1.1` |
| **[FastAudioPlayer](https://github.com/andrestubbe/FastAudioPlayer)** | **20–30× lower latency** | Low-latency playback vs Java Sound | WASAPI, AVX2 | Alpha | `v0.1.2` |
| **[FastAudioProcess](https://github.com/andrestubbe/FastAudioProcess)** | **Real-time** | Audio DSP processing & formant analysis | WASAPI / DSP | Alpha | `v0.1.1` |
| **[FastWakeWord](https://github.com/andrestubbe/FastWakeWord)** | **Continuous** | Always-on native wake-word detection | Audio DSP | Alpha | `v0.1.0` |
| **[FastTTS](https://github.com/andrestubbe/FastTTS)** | **Low latency** | High-speed text-to-speech | SIMD, Piper / Cloud | Alpha | `v0.1.2` |
| **[FastSTT](https://github.com/andrestubbe/FastSTT)** | **Real-time** | Native speech-to-text inference | Whisper Core | Alpha | `v0.1.2` |

---

## 6. Parsing & Strings

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastBytes](https://github.com/andrestubbe/fastbytes)** | **2–50× faster** | AVX2 bulk byte operations vs standard loops | SIMD, AVX2 | Alpha | `v0.1.1` |
| **[FastBinary](https://github.com/andrestubbe/FastBinary)** | **Zero allocation** | Bit-packing, VarInt & endianness conversions | Zero-Alloc | Alpha | `v0.1.0` |
| **[FastJSON](https://github.com/andrestubbe/fastjson)** | **50× faster** | SIMD structural indexing vs Jackson/Gson | SIMD, Zero-GC | Alpha | `v0.1.3` |
| **[FastString](https://github.com/andrestubbe/faststring)** | **10–100× faster** | Direct UTF-8 byte operations vs Java String | SIMD, UTF-8 | Alpha | `v0.1.1` |
| **[FastANSI](https://github.com/andrestubbe/FastANSI)** | **45–48× faster** | Zero-allocation ANSI escape state machine | State Machine | Alpha | `v0.1.2` |
| **[FastASCII](https://github.com/andrestubbe/FastASCII)** | **Near-zero latency** | Zero-allocation ASCII & UTF-8 byte engine | SIMD, Byte | Alpha | `v0.1.0` |
| **[FastContentParse](https://github.com/andrestubbe/FastContentParse)** | **High throughput** | Content normalization & markdown extraction | Native Parser | Alpha | `v0.1.4` |
| **[FastEmojis](https://github.com/andrestubbe/FastEmojis)** | **34–56× faster** | Zero-allocation East Asian Width & emoji sizing | East Asian Width | Alpha | `v0.1.0` |
| **[FastTokenize](https://github.com/andrestubbe/FastTokenize)** | **Sub-microsecond** | $O(n)$ multi-language scanner & style stream | Zero-Alloc | Alpha | `v0.1.1` |
| **[FastRegex](https://github.com/andrestubbe/FastRegex)** | **2.5–13.2× faster** | Zero-allocation pattern scanner & normalizer | Zero-Alloc, SIMD | Alpha | `v0.1.0` |
| FastHTML | — | Ultra-fast native HTML tokenizer | SIMD | TODO | — |

---

## 7. Math & Compute

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastFloat](https://github.com/andrestubbe/fastfloat)** | **5–12× faster** | SIMD parsing vs `Float.parseFloat()` | SIMD, AVX2 | Alpha | `v0.1.1` |
| **[FastMath](https://github.com/andrestubbe/fastmath)** | **3–8× faster** | JNI SIMD + OpenCL GPU vs `java.lang.Math` | OpenCL, SIMD | Alpha | `v0.1.0` |
| **[FastGPU](https://github.com/andrestubbe/FastGPU)** | **50–500× faster** | GPU Compute, SPIR-V, Vulkan Compute, Zero-Copy Buffers | Vulkan, SPIR-V, OpenCL | Alpha | `v0.1.0` |

---

## 8. Filesystem & Storage

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastFileFormat](https://github.com/andrestubbe/FastFileFormat)** | **Zero overhead** | Dual text/binary streaming format with aliases | Binary / Text | Alpha | `v0.1.0` |
| **[FastFileIndex](https://github.com/andrestubbe/FastFileIndex)** | **8× faster** | Native mmap scan vs `Files.walk()` | mmap, scan | Alpha | `v0.1.1` |
| **[FastFileSearch](https://github.com/andrestubbe/FastFileSearch)** | **100–1000× faster** | Indexed prefix trie vs linear disk search | Prefix trie | Alpha | `v0.1.0` |
| **[FastFileWatch](https://github.com/andrestubbe/FastFileWatch)** | **10–100× faster** | NTFS USN Journal vs standard `WatchService` | USN Journal | Alpha | `v0.1.0` |
| **[FastFileSystem](https://github.com/andrestubbe/FastFileSystem)** | **8–15× faster** | Index + Search + Watch unified engine | Unified API | Alpha | `v0.1.0` |
| **[FastFileScrape](https://github.com/andrestubbe/FastFileScrape)** | **5–10× faster** | Native recursive file scraping vs Java I/O | Tree + Content | Alpha | `v1.0-SNAPSHOT` |
| **[FastFileContentIndex](https://github.com/andrestubbe/FastFileContentIndex)** | **Sub-millisecond** | 3-gram bloom filter & in-file text index | SIMD, Bloom | Alpha | `v0.1.1` |
| **[FastIO](https://github.com/andrestubbe/fastio)** | **2.5–11× faster** | AVX2 Search, DMA Copy, mmap streaming | AVX2, DMA | Alpha | `v0.1.1` |
| **[FastGLOB](https://github.com/andrestubbe/FastGLOB)** | **13× faster** | Native Win32 globbing vs `PathMatcher` | Win32, C++ | Alpha | `v0.1.0` |
| **[FastCompress](https://github.com/andrestubbe/FastCompress)** | **High throughput** | Ultra-fast native compression & decompression | SIMD, AVX2 | Alpha | `v0.1.1` |

---

## 9. System & Memory

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastCore](https://github.com/andrestubbe/fastcore)** | **Zero overhead** | Cross-platform DLL & native binary auto-loader | JNI Loader | Alpha | `v0.1.0` |
| **[FastHardware](https://github.com/andrestubbe/FastHardware)** | **Sub-millisecond** | Global hardware telemetry & sensor polling | PDH / WMI | Alpha | `v0.1.0` |
| **[FastClipboard](https://github.com/andrestubbe/fastclipboard)** | **2–3× faster** | Native Win32 clipboard access vs buggy AWT | Win32 API | Alpha | `v0.1.0` |
| **[FastMemory](https://github.com/andrestubbe/FastMemory)** | **Zero GC** | SIMD 32-byte aligned RAM & page locking | Unsafe, Win32 | Alpha | `v0.1.1` |
| **[FastPointer](https://github.com/andrestubbe/FastPointer)** | **Zero overhead** | Zero-overhead native address arithmetic | JNI / Direct | Alpha | `v0.1.1` |
| **[FastSharedMemory](https://github.com/andrestubbe/FastSharedMemory)** | **Zero copy** | Low-latency IPC memory mapped files | Win32 IPC | Alpha | `v0.1.1` |
| **[FastSIMD](https://github.com/andrestubbe/FastSIMD)** | **Hardware maximum** | Direct AVX2 / AVX-512 / NEON hardware execution | AVX2, NEON | Alpha | `v0.1.3` |

---

## 10. Network & Security

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| FastNet | — | Zero-copy socket operations | Native Sockets | TODO | — |
| FastDNS | — | Asynchronous DNS resolver | Async C++ | TODO | — |
| FastTLS | — | Hardware-accelerated TLS/HTTPS | OpenSSL / Win32 | TODO | — |
| FastCrypto | — | Hardware AES / SHA acceleration | AES-NI, SIMD | TODO | — |
| FastSecureRandom | — | Hardware-seeded cryptographic RNG | Win32 CNG | TODO | — |
| FastKeychain | — | Secure OS credential storage | Windows CredMgr | TODO | — |

---

## 11. AI & Machine Learning

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastAI](https://github.com/andrestubbe/FastAI)** | **Minimal overhead** | Unified provider routing & high-speed LLM client | Multi-Provider | Alpha | `v0.1.5` |
| **[FastAIAgent](https://github.com/andrestubbe/FastAIAgent)** | **Sub-millisecond loop** | Autonomous agent logic, tools & planning | Agent Loop | Alpha | `v0.1.5` |
| **[FastAIBot](https://github.com/andrestubbe/FastAIBot)** | **High throughput** | High-performance bot orchestrator | LLM / Runtime | Alpha | `v0.1.2` |
| **[FastAIRuntime](https://github.com/andrestubbe/FastAIRuntime)** | **Deterministic** | Execution engine & FastAIEventBus | Runtime Core | Alpha | `v0.1.0` |
| **[FastAIModel](https://github.com/andrestubbe/FastAIModel)** | **Hardware accelerated** | Local ONNX & GGUF matrix inference runtime | ONNX / DirectML | Alpha | `v0.1.2` |
| **[FastAIRag](https://github.com/andrestubbe/FastAIRag)** | **High speed** | Retrieval augmented generation pipeline | RAG / Hybrid | Alpha | `v0.1.1` |
| **[FastAIMemory](https://github.com/andrestubbe/FastAIMemory)** | **Zero allocation** | Short-term & long-term conversational memory | Context Store | Alpha | `v0.1.3` |
| **[FastAIMemoryGraph](https://github.com/andrestubbe/FastAIMemoryGraph)** | **Sub-millisecond traversal** | Connected agent memory & graph relations | Graph Engine | Alpha | `v0.1.0` |
| **[FastAIVectorDB](https://github.com/andrestubbe/FastAIVectorDB)** | **Zero allocation** | Native vector database with built-in Embedder | AVX2 / JNI | Alpha | `v0.1.4` |
| **[FastAIMCP](https://github.com/andrestubbe/FastAIMCP)** | **Zero-overhead IPC** | Model Context Protocol client & stdio tool bridge | MCP | Alpha | `v0.1.0` |
| **[FastAIReasoner](https://github.com/andrestubbe/FastAIReasoner)** | **Deterministic** | Multi-step reasoning, CoT & heuristic planning | Tree-of-Thoughts | Alpha | `v0.1.0` |
| **[FastAIGraph](https://github.com/andrestubbe/FastAIGraph)** | **Sub-microsecond** | In-memory knowledge graph & multi-hop traversal | Entity Linking | Alpha | `v0.1.0` |
| **[FastAIRerank](https://github.com/andrestubbe/FastAIRerank)** | **Hardware accelerated** | Cross-encoder relevance scoring & ranking | Reranker | Alpha | `v0.1.0` |
| **[FastAIHybrid](https://github.com/andrestubbe/FastAIHybrid)** | **High throughput** | Hybrid dense & sparse retrieval fusion | Fusion Engine | Alpha | `v0.1.0` |
| **[FastAIState](https://github.com/andrestubbe/FastAIState)** | **Lock-free** | Lock-free shared agent state & blackboard memory | Shared Memory | Alpha | `v0.1.1` |
| **[FastAIMetrics](https://github.com/andrestubbe/FastAIMetrics)** | **Near-zero overhead** | Token telemetry, latency profiling, cost & evaluation | VarInt Telemetry | Alpha | `v0.1.0` |
| **[FastAIVision](https://github.com/andrestubbe/FastAIVision)** | **Local real-time** | Multimodal vision & UI grounding pipeline | Qwen2-VL / SmolVLM | Alpha | `v0.1.1` |
| **[FastAIMatcher](https://github.com/andrestubbe/FastAIMatcher)** | **Near-zero allocations** | SOX compliance & hybrid rule matching | Rule Engine / VarInt | Alpha | `v0.1.1` |

---

## 12. Vision & OCR

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastCamera](https://github.com/andrestubbe/FastCamera)** | **Sub-millisecond** | Native low-latency webcam capture | DirectShow | Alpha | `v0.1.0` |
| **[FastOCR](https://github.com/andrestubbe/FastOCR)** | **10× faster** | Native WinRT OCR engine vs Tesseract4J | WinRT OCR | Alpha | `v0.1.0` |
| FastVision | — | Dedicated vision models & GPU shaders | DirectML | TODO | — |

---

## 13. Animation & Timing

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastTween](https://github.com/andrestubbe/fasttween)** | **Zero allocation** | High-speed tweening pool | Object Pool | Alpha | `v0.1.0` |
| **[FastAnimation](https://github.com/andrestubbe/fastanimation)** | **Zero GC** | 60/120 FPS pure Java animation timeline engine | Timeline Engine | Alpha | `v0.1.0` |

---

## 14. UI & Terminal

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastTheme](https://github.com/andrestubbe/fasttheme)** | **Not available via standard Java SE** | Native Windows dark/light theming & window chrome | WinRT, DWM | Alpha | `v0.1.2` |
| **[FastUI](https://github.com/andrestubbe/FastUI)** | **Minimal overhead** | High-performance core UI building blocks | Native Core | Alpha | `v0.1.1` |
| **[FastProportion](https://github.com/andrestubbe/FastProportion)** | **Instant** | Proportional layout engine | Core Math | Alpha | `v0.1.0` |
| **[FastGrid](https://github.com/andrestubbe/FastGrid)** | **Instant** | High-performance grid layout algorithm | Core Math | Alpha | `v0.1.0` |
| **[FastNotification](https://github.com/andrestubbe/fastnotification)** | **Not available via standard Java SE** | Modern native Windows Action Center toasts | WinRT Toast | Alpha | `v0.1.0` |
| **[FastConPTY](https://github.com/andrestubbe/FastConPTY)** | **Not available via standard Java SE** | Native Windows ConPTY pseudoconsole connector | Win32 PTY | Alpha | `v0.1.0` |
| **[FastTerminal](https://github.com/andrestubbe/FastTerminal)** | **Not available via standard Java SE** | Double-buffered native TUI blitting | Win32 Console, JNI | Alpha | `v0.1.11` |
| **[FastTerminal3D](https://github.com/andrestubbe/FastTerminal3D)** | **High FPS** | Real-time 3D terminal renderer for Java | Terminal 3D | Alpha | `v0.1.0` |
| **[FastTUI](https://github.com/andrestubbe/FastTUI)** | **Low latency** | High-performance Terminal UI framework | Win32 Console | Alpha | `v0.1.3` |

---

## 🧭 How to Navigate the Ecosystem

- **Repository Links**: Click on any module name to navigate directly to its GitHub repository for source code, architecture diagrams, and usage examples.
- **Standalone or Combined**: All FastJava modules are intentionally decoupled. You can pick a single library (e.g. `FastScreenCapture` or `FastJSON`) or combine them for a complete native stack.
- **Continuous Evolution**: As an alpha-stage ecosystem, APIs, performance numbers, and platform coverage are actively being expanded.
