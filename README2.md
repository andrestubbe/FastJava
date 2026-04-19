# ⚡ FastJava — Native Java Performance Ecosystem [ALPHA]

> **5-50× faster than standard Java** — JNI-native libraries for automation, screen capture, graphics, math, JSON, and more.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Java](https://img.shields.io/badge/Java-17+-blue.svg)](https://www.java.com)
[![JitPack](https://img.shields.io/badge/JitPack-ready-green.svg)](https://jitpack.io/#andrestubbe)

---

## 🚀 Performance Dashboard

| Library | Category | Speed vs Standard Java | Purpose |
|---------|----------|------------------------|---------|
| **FastJSON** | Data | **50×** | Zero-copy JSON parsing |
| **FastString** | Text | **10-100×** | UTF-8 string operations |
| **FastScreen** | Graphics | **500-2000 FPS** | Zero-copy screen capture |
| **FastGraphics** | Graphics | **600%** | GPU-accelerated rendering |
| **FastFloat** | Math | **5-12×** | SIMD float/double parsing |
| **FastRobot** | Automation | **10-17×** | Screen capture & automation |
| **FastImage** | Graphics | **10-50×** | SIMD image processing |
| **FastIO** | System | **5-20×** | Memory-mapped file I/O |
| **FastMath** | Math | **3-8×** | SIMD + GPU math |
| **FastBytes** | Data | **2-50×** | Bulk byte operations |
| **FastClipboard** | System | **2-3×** | Native clipboard access |
| **FastImageView** | Graphics | **10×** | DirectX image viewer |
| FastCore | System | — | JNI loader (Win/Linux/Mac) |
| FastHotkey | System | — | Global system-wide hotkeys |
| FastTouch | System | — | Multi-touch & pressure |
| FastStylus | System | — | Pen input (Wacom/Surface) |
| FastTheme | UI | — | Native Windows theming |
| FastNotification | UI | — | Native toast notifications |
| FastTween | Animation | — | Tweening engine |
| FastAnimation | Animation | — | Timeline orchestration |

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
| Library | Purpose |
|---------|---------|
| [FastCore](https://github.com/andrestubbe/fastcore) | Unified JNI loader for Windows/Linux/macOS |
| [FastClipboard](https://github.com/andrestubbe/fastclipboard) | Native clipboard access (no AWT bugs) |
| [FastHotkey](https://github.com/andrestubbe/fasthotkey) | Global system-wide hotkeys |
| [FastTouch](https://github.com/andrestubbe/fasttouch) | Multi-touch & pressure input |
| [FastStylus](https://github.com/andrestubbe/faststylus) | Pen pressure, tilt, eraser detection |
| [FastIO](https://github.com/andrestubbe/fastio) | Memory-mapped file I/O |

### 🎨 Graphics & UI
| Library | Purpose |
|---------|---------|
| [FastScreen](https://github.com/andrestubbe/fastscreen) | Zero-copy screen capture (DXGI) |
| [FastImage](https://github.com/andrestubbe/fastimage) | SIMD image processing |
| [FastGraphics](https://github.com/andrestubbe/fastgraphics) | GPU-accelerated Graphics2D |
| [FastTheme](https://github.com/andrestubbe/fasttheme) | Native Windows theming |
| [FastImageView](https://github.com/andrestubbe/fastimageview) | DirectX image viewer |
| [FastNotification](https://github.com/andrestubbe/fastnotification) | Native Windows toast notifications |

### ⚡ Performance Libraries
| Library | Purpose |
|---------|---------|
| [FastFloat](https://github.com/andrestubbe/fastfloat) | SIMD float/double parsing |
| [FastString](https://github.com/andrestubbe/faststring) | UTF-8 string operations |
| [FastBytes](https://github.com/andrestubbe/fastbytes) | Bulk byte operations |
| [FastJSON](https://github.com/andrestubbe/fastjson) | Zero-copy JSON parser |
| [FastMath](https://github.com/andrestubbe/fastmath) | SIMD + GPU math acceleration |

### 🎬 Animation
| Library | Purpose |
|---------|---------|
| [FastTween](https://github.com/andrestubbe/fasttween) | Ultra-fast tweening engine |
| [FastAnimation](https://github.com/andrestubbe/fastanimation) | Timeline orchestration |

### 🤖 AI & Automation
| Library | Purpose |
|---------|---------|
| [FastRobot](https://github.com/andrestubbe/fastrobot) | Screen capture & automation |
| [FastAI](https://github.com/andrestubbe/fastai) | Unified AI client (Local + Cloud) |

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

## 📚 Documentation

- [📖 Getting Started Guide](https://github.com/andrestubbe/FastJava/blob/main/GETTING_STARTED.md)
- [🗺️ Module Map — All 20+ Libraries](https://github.com/andrestubbe/FastJava/blob/main/MAP.md)
- [🏗️ Architecture Overview](https://github.com/andrestubbe/FastJava/blob/main/ARCHITECTURE.md)
- [🛣️ Roadmap 2026-2028](https://github.com/andrestubbe/FastJava/blob/main/ROADMAP.md)
- [❓ FAQ](https://github.com/andrestubbe/FastJava/blob/main/FAQ.md)

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

- ✅ 20+ Libraries available
- ✅ Windows fully supported
- 🔄 Linux/macOS in progress
- 🔄 Maven Central coming soon

---

## 📜 License

MIT License — See [LICENSE](LICENSE)

---

## 🔗 Quick Links

- [🏠 FastJava Organization](https://github.com/andrestubbe)
- [📦 JitPack Repository](https://jitpack.io/#andrestubbe)
- [💬 Discussions](https://github.com/andrestubbe/FastJava/discussions)
- [🐛 Issue Tracker](https://github.com/andrestubbe/FastJava/issues)

---

**Keywords:** fast java, java native performance, java jni performance, fastest java libraries, java native acceleration, java windows api, java gpu acceleration, java simd acceleration, java optimization, high performance java
