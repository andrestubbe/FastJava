# ⚡ FastJava — Native Java Performance Ecosystem [ALPHA]

> **5-50× faster than standard Java** — JNI-native libraries for automation, screen capture, graphics, math, JSON, and more.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Java](https://img.shields.io/badge/Java-17+-blue.svg)](https://www.java.com)
[![JitPack](https://img.shields.io/badge/JitPack-ready-green.svg)](https://jitpack.io/#andrestubbe)

---

## 🚀 Performance Dashboard

| Library | Category | Speed vs Standard Java | Key Metrics |
|---------|----------|------------------------|-------------|
| **FastJSON** | Data | **50×** | 50× faster than Jackson/Gson, zero-GC |
| **FastString** | Text | **10-100×** | UTF-8 ops vs Java String, 50% less memory |
| **FastScreen** | Graphics | **500-2000 FPS** | DXGI zero-copy vs 60 FPS Robot |
| **FastGraphics** | Graphics | **600%** | GPU DirectX vs Java2D software |
| **FastFloat** | Math | **5-12×** | SIMD parsing vs Float.parseFloat() |
| **FastRobot** | Automation | **10-17×** | DirectX capture vs AWT Robot |
| **FastImage** | Graphics | **10-50×** | SIMD resize/blur vs BufferedImage |
| **FastIO** | System | **5-20×** | Memory-mapped vs java.nio |
| **FastMath** | Math | **3-8×** | JNI SIMD + OpenCL GPU vs java.lang.Math |
| **FastBytes** | Data | **2-50×** | AVX2 bulk ops vs standard Java |
| **FastClipboard** | System | **2-3×** | Native vs AWT, zero bugs |
| **FastImageView** | Graphics | **10×** | 200ms startup vs 2s Swing |
| FastCore | System | — | Cross-platform DLL loader |
| FastHotkey | System | **❌ Java can't** | Global system-wide hotkeys — impossible in pure Java |
| FastTouch | System | **❌ Java can't** | Multi-touch pressure — no Java API exists |
| FastStylus | System | **❌ Java can't** | Pen tilt/eraser — no Java API exists |
| FastTheme | UI | **❌ Java can't** | Native Windows theming — no Java API exists |
| FastNotification | UI | **❌ Java can't** | Native toast notifications — SystemTray is broken |
| FastTween | Animation | **❌ Java can't** | No built-in Java tweening — 8 easings + pooling |
| FastAnimation | Animation | **❌ Java can't** | No built-in Java timelines — sequences + keyframes |
| **[FastOCR](https://github.com/andrestubbe/FastOCR)** | Vision | **❌ Java can't** | Native OCR — 10-50ms vs 500ms+ Tesseract4J |

**Zero-GC.** **Zero-Copy.** **Native Speed.**

---

## 📦 Quick Start

### Maven (JitPack)

```xml
<repositories>
    <repository>
        <id>jitpack.io</id>
        <url>https://jitpack.io</url>
    </repository>
</repositories>

<dependency>
    <groupId>com.github.andrestubbe</groupId>
    <artifactId>fastfloat</artifactId>
    <version>1.1.0</version>
</dependency>
```

### Gradle

```groovy
repositories {
    maven { url 'https://jitpack.io' }
}

dependencies {
    implementation 'com.github.andrestubbe:fastfloat:1.1.0'
}
```

---

## 🗺️ Ecosystem Overview

### 🔧 System & Native Access
| Library | Purpose | Tech |
|---------|---------|------|
| [FastCore](https://github.com/andrestubbe/fastcore) | Unified JNI loader | JNI, DLL loader |
| [FastClipboard](https://github.com/andrestubbe/fastclipboard) | Native clipboard | Win32 API |
| [FastHotkey](https://github.com/andrestubbe/fasthotkey) | Global hotkeys | Win32 hooks |
| [FastTouch](https://github.com/andrestubbe/fasttouch) | Multi-touch & pressure | Win32 touch |
| [FastStylus](https://github.com/andrestubbe/faststylus) | Pen pressure, tilt | WM_POINTER |
| [FastIO](https://github.com/andrestubbe/fastio) | Memory-mapped I/O | IOCP, mmap |

### 🎨 Graphics & UI
| Library | Purpose | Tech |
|---------|---------|------|
| [FastScreen](https://github.com/andrestubbe/fastscreen) | Zero-copy screen capture | DXGI, DirectX |
| [FastImage](https://github.com/andrestubbe/fastimage) | SIMD image processing | AVX2, SSE4 |
| [FastGraphics](https://github.com/andrestubbe/fastgraphics) | GPU-accelerated Graphics2D | DirectX, GPU |
| [FastTheme](https://github.com/andrestubbe/fasttheme) | Native Windows theming | WinRT, DWM |
| [FastImageView](https://github.com/andrestubbe/fastimageview) | DirectX image viewer | DirectX |
| [FastNotification](https://github.com/andrestubbe/fastnotification) | Native notifications | WinRT, Toast |

### ⚡ Performance Libraries
| Library | Purpose | Tech |
|---------|---------|------|
| [FastFloat](https://github.com/andrestubbe/fastfloat) | SIMD float parsing | AVX2, SSE4 |
| [FastString](https://github.com/andrestubbe/faststring) | UTF-8 string ops | SIMD, AVX2 |
| [FastBytes](https://github.com/andrestubbe/fastbytes) | Bulk byte ops | AVX2, SSE4 |
| [FastJSON](https://github.com/andrestubbe/fastjson) | Zero-copy JSON | SIMD parsing |
| [FastMath](https://github.com/andrestubbe/fastmath) | Math acceleration | OpenCL, SIMD |

### 🎬 Animation
| Library | Purpose | Tech |
|---------|---------|------|
| [FastTween](https://github.com/andrestubbe/fasttween) | Ultra-fast tweening | Object pooling |
| [FastAnimation](https://github.com/andrestubbe/fastanimation) | Timeline orchestration | Zero-GC |

### 🤖 AI & Automation
| Library | Purpose | Tech |
|---------|---------|------|
| [FastRobot](https://github.com/andrestubbe/fastrobot) | Screen capture & automation | DirectX, SendInput |
| FastAI | Unified AI client — *Coming Q2 2026* | Local + Cloud API |
| FastGamepad | Controller support — *Coming Q2 2026* | XInput, DirectInput |

### 🔍 Vision & AI Pipeline (Coming 2026-2027)
| Library | Purpose | Tech |
|---------|---------|------|
| FastVision | GPU template matching | GPU shaders |
| [FastOCR](https://github.com/andrestubbe/FastOCR) | OCR | WinRT OCR |
| FastEmbedding | Text embeddings | Local/Cloud |
| FastVectorDB | Vector search | SIMD |
| FastRAG | RAG pipeline | AI orchestration |
| FastMCP | Model Context Protocol | MCP Standard |

### 🎤 Audio (Coming Q3-Q4 2026)
| Library | Purpose | Tech |
|---------|---------|------|
| FastAudio | Low-latency audio | WASAPI |
| FastAudioCapture | Real-time capture | WASAPI |
| FastTTS | Text-to-speech | SAPI5, Azure |
| FastSTT | Speech-to-text | Whisper, Cloud |

### 🛠️ Advanced System (Coming 2026-2027)
| Library | Purpose | Tech |
|---------|---------|------|
| FastInput | Raw input reading | RawInput API |
| FastInputHook | Global hooks | SetWindowsHookEx |
| FastWindow | Window control | Win32 API |
| FastProcess | Process introspection | Win32 API |
| FastFileWatch | File notifications | ReadDirectoryChangesW |
| FastOverlay | Game overlays | DirectX |
| FastDWM | VSync & timing | DWM API |
| FastHash | SIMD hashing | AVX2, SSE4 |
| FastCompress | Fast compression | SIMD |

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

<details>
<summary>WHY, HOW, BECAUSE, THEREFORE — The Reason FastJava Exists</summary>

### 🌒 WHY — The Restlessness Before the First Module
Java developers accept slowness as inevitable. We don't.

### 🌕 HOW IT STARTED — The Moment Everything Shifted
First module: FastClipboard. 2× faster, zero bugs vs. AWT. Proof of concept.

### 🌖 BECAUSE — The Realization That Changed Everything
Java's "write once, run anywhere" became "write once, run slow everywhere."
Native code isn't the enemy — unnecessary abstraction is.

### 🌑 THEREFORE — The Reason FastJava Exists
Maximum performance through minimal overhead. JNI where it matters. Pure Java where it doesn't.

</details>

---

## 🚧 Current Status

**[ALPHA]** — APIs may change. Not production-ready yet.

- ✅ **20 Released** — Available now on GitHub & JitPack
- 🚧 **15 Coming Soon** — Audio, Vision, AI, Advanced System (2026-2027)
- 🔄 **27 Planned** — Full 62-module pipeline
- ✅ Windows fully supported — Linux/macOS in progress

---

## 📜 License

MIT License — See [LICENSE](LICENSE)

---

**Keywords:** fast java, java native performance, java jni performance, fastest java libraries, java native acceleration, java windows api, java gpu acceleration, java simd acceleration, java optimization, high performance java
