# 🗺️ FastJava Module Map

> **62 native modules** for Java — from Input to AI. Zero-GC. Zero-Copy. OS-level access.

---

## 🔥 Released (GitHub)

| Module | Status | Tech Stack | Purpose | Link |
|--------|--------|------------|---------|------|
| **FastCore** | ✅ Stable | JNI, DLL loader | Cross-platform native lib loader | [→](https://github.com/andrestubbe/FastCore) |
| **FastClipboard** | ✅ Stable | Win32, JNI | Native clipboard (2-3× faster) | [→](https://github.com/andrestubbe/FastClipboard) |
| **FastHotkey** | ✅ Stable | Win32 hooks, JNI | Global system-wide hotkeys | [→](https://github.com/andrestubbe/FastHotkey) |
| **FastTouch** | ✅ Stable | Win32 touch, JNI | Multi-touch & pressure input | [→](https://github.com/andrestubbe/FastTouch) |
| **FastStylus** | ✅ Stable | WM_POINTER, JNI | Pen pressure, tilt, eraser | [→](https://github.com/andrestubbe/FastStylus) |
| **FastTheme** | 🔧 Beta | WinRT, DWM | Native Windows theming | [→](https://github.com/andrestubbe/FastTheme) |
| **FastScreen** | ✅ Stable | DXGI, DirectX | 500-2000 FPS screen capture | [→](https://github.com/andrestubbe/FastScreen) |
| **FastImage** | 🔧 Beta | SIMD, AVX2 | SIMD image processing | [→](https://github.com/andrestubbe/FastImage) |
| **FastImageView** | 🔧 Beta | DirectX | DirectX image viewer | [→](https://github.com/andrestubbe/FastImageView) |
| **FastGraphics** | 🔧 Beta | DirectX, GPU | GPU-accelerated Graphics2D | [→](https://github.com/andrestubbe/FastGraphics) |
| **FastNotification** | ✅ Stable | WinRT, Toast | Native Windows notifications | [→](https://github.com/andrestubbe/FastNotification) |
| **FastRobot** | ✅ Stable | DirectX, SendInput | Automation & screen capture | [→](https://github.com/andrestubbe/FastRobot) |
| **FastDisplay** | 🔧 Beta | Win32, DWM | Native DPI/resolution/refresh-rate monitoring | [→](https://github.com/andrestubbe/FastDisplay) |
| **FastGhostMouse** | 🔧 Beta | DirectComposition, D2D | 120Hz GPU secondary mouse overlay | [→](https://github.com/andrestubbe/FastGhostMouse) |
| **FastAI** | 🔧 Beta | REST API | Unified LLM client (Ollama, OpenAI, Claude) | [→](https://github.com/andrestubbe/FastAI) |
| **FastFloat** | ✅ Stable | SIMD, AVX2 | Float/double parsing (5-12×) | [→](https://github.com/andrestubbe/FastFloat) |
| **FastString** | ✅ Stable | SIMD, UTF-8 | String ops (10-100×) | [→](https://github.com/andrestubbe/FastString) |
| **FastBytes** | ✅ Stable | SIMD, AVX2 | Byte operations (2-50×) | [→](https://github.com/andrestubbe/FastBytes) |
| **FastJSON** | ✅ Stable | SIMD, Zero-copy | JSON parser (50×) | [→](https://github.com/andrestubbe/FastJSON) |
| **FastMath** | 🔧 Beta | OpenCL, SIMD | GPU + SIMD math (3-8×) | [→](https://github.com/andrestubbe/FastMath) |
| **FastIO** | ✅ Stable | IOCP, Memory-mapped | File I/O (5-20×) | [→](https://github.com/andrestubbe/FastIO) |
| **FastTween** | ✅ Stable | Object pooling | Tweening engine | [→](https://github.com/andrestubbe/FastTween) |
| **FastAnimation** | ✅ Stable | Timeline | Animation orchestration | [→](https://github.com/andrestubbe/FastAnimation) |

---

## � Coming Soon (No Links Yet)

**Q2 2026:** FastAI (Unified AI), FastInput (RawInput), FastGamepad (XInput)  
**Q3 2026:** FastVision (GPU shaders), FastAudio (WASAPI), FastWindow, FastProcess, FastFileWatch  
**Q4 2026:** FastOverlay, FastDWM  
**2027+:** FastHash, FastAudioCapture, FastTTS, FastSTT, FastVectorDB, FastRAG, FastMCP

---

## 💡 Full Pipeline (42 More Modules)

### Input & Human Interface
| Module | Purpose | Tech |
|--------|---------|------|
| FastInputHook | Global low-level hooks | SetWindowsHookEx |
| FastHumanInput | Unified input event stream | Aggregation |

### System & OS
| Module | Purpose | Tech |
|--------|---------|------|
| FastProcessWatch | Process start/stop triggers | Win32 Events |
| FastWindowEvents | Window move/resize events | Win32 Hooks |
| FastSystemMetrics | Mouse speed, drag threshold | Win32 API |
| FastNotifications (Linux) | Linux native notifications | DBus |
| FastNotifications (macOS) | macOS native notifications | UNUserNotificationCenter |

### Display & Graphics
| Module | Purpose | Tech |
|--------|---------|------|
| FastDisplay | Direct framebuffer access | GPU |
| FastColorSearch | SIMD pixel pattern matching | AVX2/SSE4 |
| FastGPUCopy | Zero-copy GPU↔CPU transfers | DMA |

### Data & Algorithms
| Module | Purpose | Tech |
|--------|---------|------|
| FastHash | SIMD hashing | SSE4/AVX2 |
| FastCompress | Fast compression | SIMD |
| FastParse | Generic parser framework | SIMD |
| FastRegex | SIMD regex engine | AVX2 |
| FastSort | SIMD sorting | AVX2 |
| FastPathfinder | A* with SIMD | GPU/SIMD |

### Audio
| Module | Purpose | Tech |
|--------|---------|------|
| FastAudioCapture | Real-time audio capture | WASAPI |
| FastTTS | Text-to-speech | SAPI5/Azure |
| FastSTT | Speech-to-text | Whisper/Cloud |

### AI & ML
| Module | Purpose | Tech |
|--------|---------|------|
| FastAIClient | Unified AI client | REST/GRPC |
| FastEmbedding | Text embeddings | Local/Cloud |
| FastVectorDB | In-memory vector search | SIMD |
| FastToolBridge | AI tool integration | MCP |
| FastContext | Context management for AI | — |
| FastMemory | AI memory/retrieval | Vector DB |
| FastRAG | Retrieval-Augmented Generation | Pipeline |
| FastMCP | Model Context Protocol | Standard |

### Debugging & Development
| Module | Purpose | Tech |
|--------|---------|------|
| FastCallTrace | Native call tracing | Hook |
| FastWatch | Variable watching | Memory |
| FastReplay | Input replay system | Recording |
| FastTest | Performance testing | Benchmark |

---

## 🎯 Module Categories

```
┌─────────────────────────────────────────────────────────────┐
│  INPUT          │  SYSTEM        │  DISPLAY      │  DATA      │
├─────────────────────────────────────────────────────────────┤
│  FastHotkey     │  FastCore      │  FastScreen   │  FastIO    │
│  FastTouch      │  FastClipboard │  FastImage    │  FastJSON  │
│  FastStylus     │  FastTheme     │  FastGraphics │  FastFloat │
│  FastRobot      │  FastWindow    │  FastDisplay  │  FastString│
│  FastInput      │  FastProcess   │  FastOverlay  │  FastBytes │
│  FastGamepad    │  FastFileWatch │  FastColor    │  FastHash  │
└─────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────┐
│  AUDIO          │  AI            │  UTILS        │  DEBUG   │
├─────────────────────────────────────────────────────────────┤
│  FastAudio      │  FastAI        │  FastTween    │  FastTest│
│  FastTTS        │  FastEmbedding │  FastAnim     │  FastWatch│
│  FastSTT        │  FastVectorDB  │  FastEventBus │  FastReplay│
│  FastOCR        │  FastRAG       │  FastSort     │  FastTrace│
└─────────────────────────────────────────────────────────────┘
```

---

## 🏗️ Architecture Layers

```
┌────────────────────────────────────────┐
│  AI & Agent Layer                      │ FastAI, FastRAG, FastToolBridge
├────────────────────────────────────────┤
│  Application Layer                     │ FastRobot, FastScreen, FastWindow
├────────────────────────────────────────┤
│  System Integration Layer              │ FastCore, FastIO, FastTheme
├────────────────────────────────────────┤
│  Hardware Abstraction Layer            │ JNI, SIMD, GPU
└────────────────────────────────────────┘
```

---

## 📊 Stats

- **Released:** 23 modules
- **Beta/Private:** 3 modules
- **In Development:** 7 modules
- **Planned:** 32 modules
- **Total:** 65 modules

---

## 🔗 Quick Links

- [🏠 FastJava Organization](https://github.com/andrestubbe)
- [⚡ Main README](https://github.com/andrestubbe/FastJava/blob/main/README.md)
- [🚀 New README2](https://github.com/andrestubbe/FastJava/blob/main/README2.md)
- [📦 JitPack Repository](https://jitpack.io/#andrestubbe)

---

**Last Updated:** April 2026 — Added FastDisplay, FastGhostMouse, FastAI  
**Next Review:** May 2026
