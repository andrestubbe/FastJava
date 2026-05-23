# ⚡ FastJava — Native Java Performance Ecosystem [ALPHA]

> **5-50× faster than standard Java** — JNI-native libraries for automation, screen capture, graphics, math, JSON, and more.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Java](https://img.shields.io/badge/Java-17+-blue.svg)](https://www.java.com)
[![JitPack](https://img.shields.io/badge/JitPack-ready-green.svg)](https://jitpack.io/#andrestubbe)

[![Premium Overlay Showcase](docs/screenshot.png)
](https://www.youtube.com/watch?v=b3X2zFjV6GU&list=PL-mASGDMkCUqJ0bXAJP28ykqPP9RqMMsA)

---

## 🗺️ The Ecosystem Map

A unified directory of all FastJava modules. Categorized by functional domain, including real-world performance benchmarks.

### 1. Input
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| **[FastHotkey](https://github.com/andrestubbe/fasthotkey)** | **❌ Java can't** | Global hotkeys — no Java API | Win32 hooks | Alpha |
| **[FastKeyboard](https://github.com/andrestubbe/FastKeyboard)** | **16×** | RawInput vs standard AWT KeyListener | RawInput API | Alpha |
| **[FastTouch](https://github.com/andrestubbe/fasttouch)** | **❌ Java can't** | Multi-touch pressure — no Java API | Win32 touch | Alpha |
| **[FastStylus](https://github.com/andrestubbe/faststylus)** | **❌ Java can't** | Pen tilt/eraser — no Java API exists | WM_POINTER | Alpha |
| FastMouse | — | Raw mouse reading | RawInput API | TODO |
| FastGamepad | — | Controller support | XInput | TODO |

### 2. Output
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| **[FastDisplay](https://github.com/andrestubbe/FastDisplay)** | **Instant** | Native DPI/resolution/refresh-rate | Win32, DWM | Alpha |
| FastDWM | — | VSync & timing | DWM API | TODO |

### 3. Automation
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| **[FastRobot](https://github.com/andrestubbe/fastrobot)** | **10-17×** | DirectX capture vs AWT Robot | DirectX | Alpha |
| **[FastUIA](https://github.com/andrestubbe/fastuia)** | **❌ Java can't** | Native UIA vs slow polling | Native UIA | Alpha |
| **[FastWindow](https://github.com/andrestubbe/FastWindow)** | **8×** | Flicker-free resize vs standard JFrame | Win32 API | Alpha |
| FastProcess | — | Process management | Win32 API | TODO |
| FastScheduler | — | Task scheduler | Priority queue | TODO |

### 4. Graphics
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| **[FastGraphics](https://github.com/andrestubbe/fastgraphics)** | **600%** | GPU DirectX vs Java2D software | DirectX, GPU | Alpha |
| **[FastImage](https://github.com/andrestubbe/fastimage)** | **10-50×** | SIMD resize/blur vs BufferedImage | SIMD, AVX2 | Alpha |
| **[FastImageView](https://github.com/andrestubbe/fastimageview)** | **10×** | 200ms startup vs 2s Swing | DirectX | Alpha |
| **[FastPreview](https://github.com/andrestubbe/fastpreview)** | **❌ Java can't** | Native rasterization vs slow Swing | PDFium, WV2 | Alpha |
| **[FastScreen](https://github.com/andrestubbe/fastscreen)** | **500-2000 FPS** | DXGI zero-copy vs 60 FPS Robot | DXGI, DX | Alpha |
| **[FastGhostMouse](https://github.com/andrestubbe/FastGhostMouse)** | **120Hz GPU** | Secondary mouse overlay | DComposition | Alpha |
| FastOverlay | — | Game overlays | DirectX | TODO |

### 5. Audio
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| **[FastAudioCapture](https://github.com/andrestubbe/FastAudioCapture)** | **❌ No WASAPI** | Real-time capture vs Java Sound | WASAPI | Alpha |
| **[FastAudioPlayer](https://github.com/andrestubbe/FastAudioPlayer)** | **20-30×** | Low-latency playback vs Java Sound | WASAPI | Alpha |
| FastTTS | — | Text-to-speech | Piper/Cloud | TODO |
| FastSTT | — | Speech-to-text | Whisper | TODO |

### 6. Parsing
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| **[FastANSI](https://github.com/andrestubbe/FastANSI)** | **45-48×** | Zero-allocation ANSI state parser | State Machine | Alpha |
| **[FastBytes](https://github.com/andrestubbe/fastbytes)** | **2-50×** | AVX2 bulk ops vs standard Java | SIMD, AVX2 | Alpha |
| **[FastEmojis](https://github.com/andrestubbe/FastEmojis)** | **34-56×** | Zero-allocation Emoji width engine | East Asian Width | Alpha |
| **[FastJSON](https://github.com/andrestubbe/fastjson)** | **50×** | 50× faster than Jackson/Gson | SIMD, Zero-GC| Alpha |
| **[FastString](https://github.com/andrestubbe/faststring)** | **10-100×** | UTF-8 ops vs Java String | SIMD, UTF-8 | Alpha |
| **[FastTokenizer](https://github.com/andrestubbe/fasttokenizer)** | **10-25×** | O(n) SIMD scanner vs slow Regex | Deterministic| Alpha |
| FastHTML | — | HTML parser | SIMD | TODO |
| FastRegex | — | SIMD regex engine | AVX2 | TODO |

### 7. Math
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| **[FastFloat](https://github.com/andrestubbe/fastfloat)** | **5-12×** | SIMD parsing vs Float.parseFloat() | SIMD, AVX2 | Alpha |
| **[FastMath](https://github.com/andrestubbe/fastmath)** | **3-8×** | JNI SIMD + OpenCL GPU vs java.lang.Math| OpenCL, SIMD | Alpha |
| FastSIMD | — | SIMD operations framework | AVX2/512 | TODO |

### 8. Filesystem
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| **[FastFileIndex](https://github.com/andrestubbe/FastFileIndex)** | **8×** | Native mmap scan vs Files.walk() | mmap, scan | Alpha |
| **[FastFileSearch](https://github.com/andrestubbe/FastFileSearch)** | **100-1000×** | Indexed trie vs linear search | Prefix trie | Alpha |
| **[FastFileSystem](https://github.com/andrestubbe/FastFileSystem)** | **Unified** | Index + Search + Watch in one API | Unified API | Alpha |
| **[FastFileWatch](https://github.com/andrestubbe/FastFileWatch)** | **10-100×** | USN Journal vs WatchService | USN Journal | Alpha |

### 9. System
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| **[FastClipboard](https://github.com/andrestubbe/fastclipboard)** | **2-3×** | Native vs AWT, zero bugs | Win32 API | Alpha |
| **[FastIO](https://github.com/andrestubbe/fastio)** | **2.5-11×** | AVX2 Search, DMA Copy, mmap | AVX2, DMA | Alpha |
| **[FastCore](https://github.com/andrestubbe/fastcore)** | **—** | Cross-platform DLL loader | JNI Loader | Alpha |
| FastPointer | — | Native pointer operations | JNI | TODO |
| FastMemory | — | System/RAM access | Unsafe | TODO |
| FastHardware | — | Global hardware telemetry | PDH/WMI | TODO |

### 10. Network
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| FastNet | — | Network operations | Zero-copy | TODO |
| FastDNS | — | DNS resolver | Async | TODO |
| FastTLS | — | TLS/HTTPS | OpenSSL | TODO |

### 11. Security
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| FastCrypto | — | Encryption | AES/SIMD | TODO |
| FastSecureRandom | — | Secure RNG | Hardware | TODO |
| FastKeychain | — | Credential store | Windows | TODO |

### 12. AI
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| FastAIService | — | Router/Orchestrator | API | TODO |
| FastModel | — | Model-Runtime | ONNX | TODO |
| FastRAG | — | Retrieval-Augmented Generation | Pipeline | TODO |
| FastMCP | — | Model Context Protocol Adapter | MCP | TODO |

### 13. Vision
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| **[FastOCR](https://github.com/andrestubbe/FastOCR)** | **10× faster** | WinRT OCR vs Tesseract4J | WinRT OCR | Alpha |
| FastVision | — | Vision-Modelle / GPU-Kernels | GPU shaders | TODO |

### 14. Animation
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| **[FastAnimation](https://github.com/andrestubbe/fastanimation)** | **Zero overhead** | No built-in timelines — pure Java | Timeline | Alpha |
| **[FastTween](https://github.com/andrestubbe/fasttween)** | **Zero overhead** | No built-in tweening | Pool | Alpha |

### 15. UI
| Module | Speed vs Java | Key Metrics | Tech | Status |
|--------|---------------|-------------|------|--------|
| **[FastNotification](https://github.com/andrestubbe/fastnotification)** | **❌ Broken** | SystemTray broken → native WinRT | WinRT, Toast| Alpha |
| **[FastTerminal](https://github.com/andrestubbe/FastTerminal)** | **❌ Java can't** | Double-buffered TUI blitting | Win32 console, JNI | Alpha |
| **[FastTheme](https://github.com/andrestubbe/fasttheme)** | **❌ Java can't** | Native Windows theming | WinRT, DWM | Alpha |

---

## 🎯 Philosophy

Java alone cannot do:
- ❌ Global hotkeys when unfocused
- ❌ Low-latency screen capture
- ❌ Reliable clipboard operations
- ❌ Hardware I/O access
- ❌ GPU acceleration
- ❌ Native input devices

**FastJava fixes this.** Pure C++ accelerators. JNI bindings. Zero overhead.

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

- ✅ **31 Released** — Available now on GitHub & JitPack
- 🚧 **13 Coming Soon** — Audio, Vision, AI, Advanced System (2026-2027)
- 🔄 **37 Planned** — Full 81-module pipeline
- ✅ Windows fully supported — Linux/macOS in progress

---

---

**Keywords:** fast java, java native performance, java jni performance, fastest java libraries, java native acceleration, java windows api, java gpu acceleration, java simd acceleration, java optimization, high performance java
