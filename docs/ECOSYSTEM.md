# FastJava Ecosystem Directory & Performance Matrix 🗺️

> **Complete catalogue of all FastJava modules, performance characteristics, native technologies, and development status.**

**Status:** Alpha · Windows-first · Linux/macOS in progress  
**Benchmarks:** Measured on real hardware (no synthetic marketing numbers)

---

## 🏛️ Architecture & Core Tenets

FastJava is not a framework — it is a modular, full-stack performance ecosystem. 

Each module targets a specific boundary layer where Java SE abstracts, stalls, or lacks native OS capabilities entirely. The architecture spans the canonical 20 functional domains:

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
│  FastMemory (32-Byte Aligned RAM) │ FastPointer (Direct Address Math) │
│  FastSIMD (AVX2 / AVX-512)        │ FastCore (Native DLL Auto-Loader)  │
└────────────────────────────────────────────────────────────────────────┘
```

### Capability & Benchmark Notes
- **"Not available via standard Java SE"**: Indicates capabilities (such as global unfocused hotkeys, raw pen pressure, or hardware desktop duplication) that Java SE provides no standard API for.
- **Reported Performance / Capability**: Benchmark metrics measured against standard Java equivalents (e.g. `java.awt.Robot`, `java.lang.Math`, `java.lang.String`, or Jackson/Gson). Figures are measured on real hardware configurations for orientation.

---

## 📐 0. Structure

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastArchitecture](https://github.com/andrestubbe/FastArchitecture)** | **Clean boundaries** | Enterprise modular system blueprints & dependency matrix | Architecture | Alpha | `v0.1.0` |

---

## ⚡ 1. Native & Memory Foundation

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastCore](https://github.com/andrestubbe/FastCore)** | **Zero overhead** | Cross-platform DLL & native binary auto-loader | JNI Loader | Alpha | `v0.1.0` |
| **[FastPointer](https://github.com/andrestubbe/FastPointer)** | **Zero overhead** | Zero-overhead direct native address arithmetic | JNI / Direct | Alpha | `v0.1.1` |
| **[FastMemory](https://github.com/andrestubbe/FastMemory)** | **Zero GC** | SIMD 32-byte aligned RAM & OS page locking | Unsafe, Win32 | Alpha | `v0.1.1` |
| **[FastSIMD](https://github.com/andrestubbe/FastSIMD)** | **Hardware maximum** | AVX2 / AVX-512 / NEON hardware vectorization | AVX2, NEON | Alpha | `v0.1.3` |
| **[FastSharedMemory](https://github.com/andrestubbe/FastSharedMemory)** | **Zero copy** | Ultra-low latency IPC memory mapped files | Win32 IPC | Alpha | `v0.1.2` |

---

## 🤖 2. AI & Machine Learning

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastAI](https://github.com/andrestubbe/FastAI)** | **Minimal overhead** | Unified provider routing & high-speed LLM client | Multi-Provider | Alpha | `v0.1.14` |
| **[FastAIModel](https://github.com/andrestubbe/FastAIModel)** | **Hardware accelerated** | Local ONNX & GGUF matrix inference runtime | ONNX / DirectML | Alpha | `v0.1.4` |
| **[FastAIMemory](https://github.com/andrestubbe/FastAIMemory)** | **Zero allocation** | Short-term & long-term conversational memory | Context Store | Alpha | `v0.1.4` |
| **[FastAIMemoryGraph](https://github.com/andrestubbe/FastAIMemoryGraph)** | **Sub-millisecond** | Connected agent memory & graph relations | Graph Engine | Alpha | `v0.1.0` |
| **[FastAIVectorDB](https://github.com/andrestubbe/FastAIVectorDB)** | **Zero allocation** | Native vector database with built-in Embedder | AVX2 / JNI | Alpha | `v0.1.4` |
| **[FastAIGraph](https://github.com/andrestubbe/FastAIGraph)** | **Sub-microsecond** | In-memory knowledge graph & multi-hop traversal | Entity Linking | Alpha | `v0.1.0` |
| **[FastAIRerank](https://github.com/andrestubbe/FastAIRerank)** | **Hardware accelerated** | Cross-encoder relevance scoring & ranking | Reranker | Alpha | `v0.1.0` |
| **[FastAIHybrid](https://github.com/andrestubbe/FastAIHybrid)** | **High throughput** | Hybrid dense & sparse retrieval fusion | Fusion Engine | Alpha | `v0.1.0` |
| **[FastAIRag](https://github.com/andrestubbe/FastAIRag)** | **High speed** | Retrieval augmented generation pipeline | RAG / Hybrid | Alpha | `v0.1.1` |
| **[FastAIReasoner](https://github.com/andrestubbe/FastAIReasoner)** | **Deterministic** | Multi-step reasoning, CoT & heuristic planning | Tree-of-Thoughts | Alpha | `v0.1.0` |
| **[FastAIRuntime](https://github.com/andrestubbe/FastAIRuntime)** | **Deterministic** | Execution engine & FastAIEventBus | Runtime Core | Alpha | `v0.1.1` |
| **[FastAIMCP](https://github.com/andrestubbe/FastAIMCP)** | **Zero-overhead IPC** | Model Context Protocol client & stdio tool bridge | MCP | Alpha | `v0.1.1` |
| **[FastAIBot](https://github.com/andrestubbe/FastAIBot)** | **High throughput** | High-performance bot orchestrator | LLM / Runtime | Alpha | `v0.1.2` |
| **[FastAIAgent](https://github.com/andrestubbe/FastAIAgent)** | **Sub-millisecond loop** | Autonomous agent logic, tools & planning | Agent Loop | Alpha | `v0.1.7` |
| **[FastAIState](https://github.com/andrestubbe/FastAIState)** | **Lock-free** | Lock-free shared agent state & blackboard memory | Shared Memory | Alpha | `v0.1.2` |
| **[FastAIMetrics](https://github.com/andrestubbe/FastAIMetrics)** | **Near-zero overhead** | Token telemetry, latency profiling, cost & evaluation | VarInt Telemetry | Alpha | `v0.1.1` |
| **[FastAIVision](https://github.com/andrestubbe/FastAIVision)** | **Local real-time** | Multimodal vision & UI grounding pipeline | Qwen2-VL / SmolVLM | Alpha | `v0.1.1` |
| **[FastAIMatcher](https://github.com/andrestubbe/FastAIMatcher)** | **Near-zero allocations** | SOX compliance & hybrid rule matching | Rule Engine / VarInt | Alpha | `v0.1.2` |
| **[FastAIGuard](https://github.com/andrestubbe/FastAIGuard)** | **Minimal overhead** | Safety guardrails, prompt injection detection | Guardrail Core | Alpha | `v0.1.0` |
| **[FastAIEval](https://github.com/andrestubbe/FastAIEval)** | **Automated** | Evaluation framework for LLM outputs | Eval Suite | Alpha | `v0.1.0` |
| **[FastAISandbox](https://github.com/andrestubbe/FastAISandbox)** | **Isolated** | Secure code execution sandbox for agents | Sandbox Core | Alpha | `v0.1.0` |

---

## 🤹 3. Learning & Deep Learning

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| FastDL | — | Native Deep Learning framework | CUDA / DirectML | TODO | — |
| FastML | — | Lightweight machine learning primitives | Native C++ | TODO | — |

---

## 🛠️ 4. Tools & Productivity

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastMessage](https://github.com/andrestubbe/FastMessage)** | **High throughput** | Inter-agent unified messaging bus | Event Bus | Alpha | `v0.1.0` |
| **[FastMail](https://github.com/andrestubbe/FastMail)** | **Minimal latency** | Low-overhead email protocols & parsing | Native Net | Alpha | `v0.1.0` |
| **[FastCalendar](https://github.com/andrestubbe/FastCalendar)** | **Sub-millisecond** | High-performance calendar math & ICS parser | Core Time | Alpha | `v0.1.0` |
| **[FastNotes](https://github.com/andrestubbe/FastNotes)** | **Fast indexing** | Local markdown note repository engine | Content Index | Alpha | `v0.1.0` |
| **[FastContacts](https://github.com/andrestubbe/FastContacts)** | **Sub-millisecond** | Contact address book & vCard index | Core DB | Alpha | `v0.1.0` |
| **[FastIntegrate](https://github.com/andrestubbe/FastIntegrate)** | **Unified** | Modular service integration broker | Integration | Alpha | `v0.1.0` |

---

## 📁 5. Filesystem & Storage

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastFileFormat](https://github.com/andrestubbe/FastFileFormat)** | **Zero overhead** | Dual text/binary streaming format with aliases | Binary / Text | Alpha | `v0.1.1` |
| **[FastFileIndex](https://github.com/andrestubbe/FastFileIndex)** | **8× faster** | Native mmap scan vs `Files.walk()` | mmap, scan | Alpha | `v0.1.2` |
| **[FastFileSearch](https://github.com/andrestubbe/FastFileSearch)** | **100–1000× faster** | Indexed prefix trie vs linear disk search | Prefix trie | Alpha | `v0.1.1` |
| **[FastFileWatch](https://github.com/andrestubbe/FastFileWatch)** | **10–100× faster** | NTFS USN Journal vs standard `WatchService` | USN Journal | Alpha | `v0.1.0` |
| **[FastFileSystem](https://github.com/andrestubbe/FastFileSystem)** | **8–15× faster** | Index + Search + Watch unified engine | Unified API | Alpha | `v0.1.0` |
| **[FastFileScrape](https://github.com/andrestubbe/FastFileScrape)** | **5–10× faster** | Native recursive file scraping vs Java I/O | Tree + Content | Alpha | `v0.1.0` |
| **[FastFileContentIndex](https://github.com/andrestubbe/FastFileContentIndex)** | **Sub-millisecond** | 3-gram bloom filter & in-file text index | SIMD, Bloom | Alpha | `v0.1.3` |
| **[FastIO](https://github.com/andrestubbe/FastIO)** | **2.5–11× faster** | AVX2 Search, DMA Copy, mmap streaming | AVX2, DMA | Alpha | `v0.1.1` |
| **[FastGLOB](https://github.com/andrestubbe/FastGLOB)** | **13× faster** | Native Win32 globbing vs `PathMatcher` | Win32, C++ | Alpha | `v0.1.0` |
| **[FastCompress](https://github.com/andrestubbe/FastCompress)** | **High throughput** | Ultra-fast native compression & decompression | SIMD, AVX2 | Alpha | `v0.1.0` |

---

## ⚙️ 6. Parsing & Data Formats

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastBytes](https://github.com/andrestubbe/FastBytes)** | **2–50× faster** | AVX2 bulk byte operations vs standard loops | SIMD, AVX2 | Alpha | `v0.1.0` |
| **[FastBinary](https://github.com/andrestubbe/FastBinary)** | **Zero allocation** | Bit-packing, VarInt & endianness conversions | Zero-Alloc | Alpha | `v0.1.1` |
| **[FastFloat](https://github.com/andrestubbe/FastFloat)** | **5–12× faster** | SIMD parsing vs `Float.parseFloat()` | SIMD, AVX2 | Alpha | `v0.1.1` |
| **[FastJSON](https://github.com/andrestubbe/FastJSON)** | **50× faster** | SIMD structural indexing vs Jackson/Gson | SIMD, Zero-GC | Alpha | `v0.1.4` |
| **[FastString](https://github.com/andrestubbe/FastString)** | **10–100× faster** | Direct UTF-8 byte operations vs Java String | SIMD, UTF-8 | Alpha | `v0.1.1` |
| **[FastContentChunk](https://github.com/andrestubbe/FastContentChunk)** | **Sub-millisecond** | Zero-copy semantic chunking for RAG | Zero-Alloc | Alpha | `v0.1.3` |
| **[FastContentParse](https://github.com/andrestubbe/FastContentParse)** | **High throughput** | Content normalization & markdown extraction | Native Parser | Alpha | `v0.1.4` |
| **[FastEmojis](https://github.com/andrestubbe/FastEmojis)** | **34–56× faster** | Zero-allocation East Asian Width & emoji sizing | East Asian Width | Alpha | `v0.1.0` |
| **[FastTokenize](https://github.com/andrestubbe/FastTokenize)** | **Sub-microsecond** | $O(n)$ multi-language scanner & style stream | Zero-Alloc | Alpha | `v0.1.1` |
| **[FastRegex](https://github.com/andrestubbe/FastRegex)** | **2.5–13.2× faster** | Zero-allocation pattern scanner & normalizer | Zero-Alloc, SIMD | Alpha | `v0.1.1` |
| **[FastHTML](https://github.com/andrestubbe/FastHTML)** | **High throughput** | Ultra-fast native HTML tokenizer & DOM tree | SIMD | Alpha | `v0.1.1` |

---

## 🌐 7. Web & Crawling

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastWebScrape](https://github.com/andrestubbe/FastWebScrape)** | **Near-zero allocations** | High-performance HTML scraper & text extractor | Native Parser | Alpha | `v0.1.4` |
| **[FastWebSpider](https://github.com/andrestubbe/FastWebSpider)** | **High throughput** | Asynchronous multi-threaded web crawler | NIO / Async | Alpha | `v0.1.4` |

---

## 💻 8. System & OS Services

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastHardware](https://github.com/andrestubbe/FastHardware)** | **Sub-millisecond** | Global hardware telemetry & sensor polling | PDH / WMI | Alpha | `v0.1.1` |
| **[FastClipboard](https://github.com/andrestubbe/FastClipboard)** | **2–3× faster** | Native Win32 clipboard access vs buggy AWT | Win32 API | Alpha | `v1.0` |
| **[FastNotification](https://github.com/andrestubbe/FastNotification)** | **Not available via standard Java SE** | Modern native Windows Action Center toasts | WinRT Toast | Alpha | `v0.1.0` |
| FastProcess | — | Native process management & tree kill | Win32 API | TODO | — |
| FastProcessWatch | — | Low-latency process creation & termination watcher | WMI / Win32 | TODO | — |
| FastWindowEvents | — | System-wide window focus & repositioning events | Win32 Hooks | TODO | — |
| FastScheduler | — | High-resolution microsecond task scheduler | Priority Queue | TODO | — |

---

## 🔢 9. Compute & Math

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastMath](https://github.com/andrestubbe/FastMath)** | **3–8× faster** | JNI SIMD + OpenCL GPU vs `java.lang.Math` | OpenCL, SIMD | Alpha | `v0.1.0` |
| **[FastGPU](https://github.com/andrestubbe/FastGPU)** | **50–500× faster** | GPU Compute, SPIR-V, Vulkan Compute, Zero-Copy Buffers | Vulkan, SPIR-V, OpenCL | Alpha | `v0.1.1` |
| **[FastQuant](https://github.com/andrestubbe/FastQuant)** | **Hardware accelerated** | Vector quantization & low-bit matrix transforms | AVX2 SIMD | Alpha | `v0.1.0` |
| FastGPUCopy | — | Zero-copy direct GPU-to-GPU memory transfer | Vulkan / D3D11 | TODO | — |
| FastHash | — | SIMD-accelerated non-cryptographic hashing | xxHash / AVX2 | TODO | — |
| FastSort | — | AVX-512 / AVX2 vectorized sorting network | SIMD Sort | TODO | — |
| FastPathfinder | — | High-speed grid & graph A* navigation engine | Native C++ | TODO | — |

---

## ⌨️ 10. Input

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastHotkey](https://github.com/andrestubbe/FastHotkey)** | **Not available via standard Java SE** | Global system-wide hotkeys when unfocused | Win32 low-level hooks | Alpha | `v0.1.0` |
| **[FastKeyboard](https://github.com/andrestubbe/FastKeyboard)** | **16× faster** | RawInput vs standard AWT KeyListener | RawInput API | Alpha | `v0.1.2` |
| **[FastKeylogger](https://github.com/andrestubbe/FastKeylogger)** | **Near-zero overhead** | Asynchronous low-level keyboard tracking | Win32 Hooks | Alpha | `v0.1.2` |
| **[FastMouse](https://github.com/andrestubbe/FastMouse)** | **Sub-millisecond** | High-precision raw mouse polling | RawInput API | Alpha | `v0.1.1` |
| **[FastMouseLogger](https://github.com/andrestubbe/FastMouseLogger)** | **Continuous** | Global mouse movement & click telemetry | Win32 Hooks | Alpha | `v0.1.1` |
| **[FastTouch](https://github.com/andrestubbe/FastTouch)** | **Not available via standard Java SE** | Multi-touch pressure & contact geometry | Win32 Touch API | Alpha | `v0.1.0` |
| **[FastStylus](https://github.com/andrestubbe/FastStylus)** | **Not available via standard Java SE** | Pen tilt, eraser & barrel pressure | WM_POINTER | Alpha | `v0.1.0` |
| FastGamepad | — | Direct controller support | XInput | TODO | — |

---

## 🤖 11. Automation

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastRobot](https://github.com/andrestubbe/FastRobot)** | **10–17× faster** | DirectX hardware capture vs `java.awt.Robot` | DirectX 11 | Alpha | `v0.1.1` |
| **[FastUIA](https://github.com/andrestubbe/FastUIA)** | **Not available via standard Java SE** | Native Windows UI Automation vs slow polling | Native UIA COM | Alpha | `v0.1.0` |

---

## 👁️ 12. Vision & Screen Capture

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastScreen](https://github.com/andrestubbe/FastScreen)** | **500–2000 FPS** | DXGI zero-copy desktop capture vs 60 FPS Robot | DXGI 1.2+ / D3D11 | Alpha | `v0.1.3` |
| **[FastScreenCapture](https://github.com/andrestubbe/FastScreenCapture)** | **Instant / 60 FPS** | Bit-perfect uncompressed BMP & direct FFmpeg video pipe | DXGI / NIO DMA | Alpha | `v0.1.1` |
| **[FastCamera](https://github.com/andrestubbe/FastCamera)** | **Sub-millisecond** | Native low-latency webcam capture | DirectShow | Alpha | `v0.1.1` |
| **[FastOCR](https://github.com/andrestubbe/FastOCR)** | **10× faster** | Native WinRT OCR engine vs Tesseract4J | WinRT OCR | Alpha | `v0.1.1` |
| FastImageSearch | — | High-speed SIMD template & sub-image matcher | AVX2 / SIMD | TODO | — |

---

## 🔊 13. Audio & Voice

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastAudioCapture](https://github.com/andrestubbe/FastAudioCapture)** | **Not available via standard Java SE** | Real-time WASAPI hardware loopback vs Java Sound | WASAPI, AVX2 | Alpha | `v0.1.1` |
| **[FastAudioPlayer](https://github.com/andrestubbe/FastAudioPlayer)** | **20–30× lower latency** | Low-latency playback vs Java Sound | WASAPI, AVX2 | Alpha | `v0.1.2` |
| **[FastAudioProcess](https://github.com/andrestubbe/FastAudioProcess)** | **Real-time** | Audio DSP processing & formant analysis | WASAPI / DSP | Alpha | `v0.1.4` |
| **[FastChiptune](https://github.com/andrestubbe/FastChiptune)** | **Zero allocation** | 4-channel generative chiptune synthesizer & tension curve engine | 8-bit / Tracker DSP | Alpha | `v0.1.0` |
| **[FastVAD](https://github.com/andrestubbe/FastVAD)** | **Zero latency** | High-accuracy Voice Activity Detection | VAD Core | Alpha | `v0.1.0` |
| **[FastTurn](https://github.com/andrestubbe/FastTurn)** | **Real-time** | Conversational turn-taking & interruption engine | Turn Manager | Alpha | `v0.1.0` |
| **[FastTTS](https://github.com/andrestubbe/FastTTS)** | **Low latency** | High-speed text-to-speech | SIMD, Piper / Cloud | Alpha | `v0.1.2` |
| **[FastSTT](https://github.com/andrestubbe/FastSTT)** | **Real-time** | Native speech-to-text inference | Whisper Core | Alpha | `v0.1.3` |
| **[FastWakeWord](https://github.com/andrestubbe/FastWakeWord)** | **Continuous** | Always-on native wake-word detection | Audio DSP | Alpha | `v0.1.2` |

---

## 🎨 14. Graphics & Imaging

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastWindow](https://github.com/andrestubbe/FastWindow)** | **8× faster** | Flicker-free native resize vs standard JFrame | Win32 API | Alpha | `v0.1.1` |
| **[FastVulkan](https://github.com/andrestubbe/FastVulkan)** | **Hardware maximum** | Direct Vulkan graphics & compute pipeline | Vulkan Core | Alpha | `v0.1.0` |
| **[FastImage](https://github.com/andrestubbe/FastImage)** | **10–50× faster** | SIMD resize, blur & convert vs BufferedImage | SIMD, AVX2 | Alpha | `v0.1.3` |
| **[FastGraphics](https://github.com/andrestubbe/FastGraphics)** | **600% throughput** | GPU DirectX 2D vs Java2D software blits | DirectX, GPU | Alpha | `v0.1.0` |
| **[FastOverlay](https://github.com/andrestubbe/FastOverlay)** | **Hardware VSync** | Seamless transparent game overlays | DirectX 11 | Alpha | `v0.1.0` |
| **[FastGhostMouse](https://github.com/andrestubbe/FastGhostMouse)** | **120Hz GPU** | Zero-lag secondary mouse cursor overlay | DirectComposition | Alpha | `v0.1.0` |
| **[FastSoftware3D](https://github.com/andrestubbe/FastSoftware3D)** | **High FPS** | Software 3D rendering pipeline | AVX2 SIMD | Alpha | `v0.1.0` |
| **[FastThumb](https://github.com/andrestubbe/FastThumb)** | **Sub-millisecond** | Native OS thumbnail extraction | Windows Shell | Alpha | `v0.1.1` |
| **[FastPreview](https://github.com/andrestubbe/FastPreview)** | **Native speed** | Fast rasterization vs slow Swing preview | PDFium, WebView2 | Alpha | `v0.1.1` |
| FastImageView | — | Instant 200ms image viewer vs 2s Swing frame | DirectX | TODO | — |

---

## 🪟 15. Display & Layout

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastDisplay](https://github.com/andrestubbe/FastDisplay)** | **Instant** | Native per-monitor DPI, resolution & refresh rates | Win32, DWM | Alpha | `v0.1.0` |
| **[FastTheme](https://github.com/andrestubbe/FastTheme)** | **Not available via standard Java SE** | Native Windows dark/light theming & window chrome | WinRT, DWM | Alpha | `v0.1.4` |
| **[FastUI](https://github.com/andrestubbe/FastUI)** | **Minimal overhead** | High-performance core UI building blocks | Native Core | Alpha | `v0.1.0` |
| **[FastProportion](https://github.com/andrestubbe/FastProportion)** | **Instant** | Proportional layout engine | Core Math | Alpha | `v0.1.0` |
| **[FastGrid](https://github.com/andrestubbe/FastGrid)** | **Instant** | High-performance grid layout algorithm | Core Math | Alpha | `v0.1.1` |

---

## 📟 16. Terminal & Console

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastANSI](https://github.com/andrestubbe/FastANSI)** | **45–48× faster** | Zero-allocation ANSI escape state machine | State Machine | Alpha | `v0.1.3` |
| **[FastASCII](https://github.com/andrestubbe/FastASCII)** | **Near-zero latency** | Zero-allocation ASCII & UTF-8 byte engine | SIMD, Byte | Alpha | `v0.1.0` |
| **[FastConPTY](https://github.com/andrestubbe/FastConPTY)** | **Not available via standard Java SE** | Native Windows ConPTY pseudoconsole connector | Win32 PTY | Alpha | `v0.1.0` |
| **[FastTerminal](https://github.com/andrestubbe/FastTerminal)** | **Not available via standard Java SE** | Double-buffered native TUI blitting | Win32 Console, JNI | Alpha | `v0.1.11` |
| **[FastTerminal3D](https://github.com/andrestubbe/FastTerminal3D)** | **High FPS** | Real-time 3D terminal renderer for Java | Terminal 3D | Alpha | `v0.1.1` |
| **[FastTUI](https://github.com/andrestubbe/FastTUI)** | **Low latency** | High-performance Terminal UI framework | Win32 Console | Alpha | `v0.1.2` |

---

## 🎬 17. Animation & Timing

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| **[FastDWM](https://github.com/andrestubbe/FastDWM)** | **Not available via standard Java SE** | Native Desktop Window Manager VSync & timing | DWM API | Alpha | `v0.1.0` |
| **[FastExecution](https://github.com/andrestubbe/FastExecution)** | **Zero overhead** | Microsecond execution scheduler | Core Threading | Alpha | `v0.1.0` |
| **[FastTween](https://github.com/andrestubbe/FastTween)** | **Zero allocation** | High-speed tweening pool | Object Pool | Alpha | `v0.1.0` |
| **[FastAnimation](https://github.com/andrestubbe/FastAnimation)** | **Zero GC** | 60/120 FPS pure Java animation timeline engine | Timeline Engine | Alpha | `v0.1.2` |

---

## 🌐 18. Network

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| FastNet | — | Zero-copy socket operations | Native Sockets | TODO | — |
| FastDNS | — | Asynchronous DNS resolver | Async C++ | TODO | — |
| FastTLS | — | Hardware-accelerated TLS/HTTPS | OpenSSL / Win32 | TODO | — |

---

## 🔒 19. Security

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| FastCrypto | — | Hardware AES / SHA acceleration | AES-NI, SIMD | TODO | — |
| FastSecureRandom | — | Hardware-seeded cryptographic RNG | Win32 CNG | TODO | — |
| FastKeychain | — | Secure OS credential storage | Windows CredMgr | TODO | — |

---

## 🔬 20. Diagnostics

| Module | Reported Performance / Capability | Key Metrics | Tech | Status | Version |
|--------|-----------------------------------|-------------|------|--------|---------|
| FastCallTrace | — | Microsecond callstack & execution tracing | Native Profiler | TODO | — |
| FastWatch | — | Continuous variable & memory watcher | Diagnostic Core | TODO | — |
| FastReplay | — | Deterministic execution recorder & replay | Replay Engine | TODO | — |
| FastTest | — | High-speed native test runner | Test Runner | TODO | — |

---

## 🧭 How to Navigate the Ecosystem

- **Repository Links**: Click on any module name to navigate directly to its GitHub repository for source code, architecture diagrams, and usage examples.
- **Standalone or Combined**: All FastJava modules are intentionally decoupled. You can pick a single library (e.g. `FastScreenCapture` or `FastJSON`) or combine them for a complete native stack.
- **Continuous Evolution**: As an alpha-stage ecosystem, APIs, performance numbers, and platform coverage are actively being expanded.
