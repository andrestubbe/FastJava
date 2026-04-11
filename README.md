# FastJava — Native Java Performance Ecosystem

**⚡ Ultra-fast native Java libraries — JNI-based performance for automation, screen capture, clipboard, hotkeys, graphics, and more**

[![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)]()
[![Java](https://img.shields.io/badge/Java-17+-blue.svg)](https://www.java.com)
[![Platform](https://img.shields.io/badge/Platform-Windows%2010+-lightgrey.svg)]()
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![JitPack](https://jitpack.io/v/andrestubbe/fastjava.svg)](https://jitpack.io/#andrestubbe)
[![GitHub stars](https://img.shields.io/github/stars/andrestubbe/fastjava.svg)](https://github.com/andrestubbe/fastjava/stargazers)

FastJava is a collection of **high-performance JNI-based Java libraries** that use **pure C++ accelerators** to replace slow Java standard library components with native Windows API implementations. Built for **speed**, **reliability**, and **deterministic performance**.

---

## 📦 Libraries

| Library | Purpose | Performance | Status |
|---------|---------|-------------|--------|
| **[FastClipboard](https://github.com/andrestubbe/fastclipboard)** | Native clipboard access | **2-3× faster** than AWT | ✅ Released |
| **[FastRobot](https://github.com/andrestubbe/fastrobot)** | Screen capture & automation | **10-17× faster** than Robot | ✅ Released |
| **[FastHotkey](https://github.com/andrestubbe/fasthotkey)** | Global system-wide hotkeys | **Impossible** in pure Java | ✅ Released |
| **[FastTheme](https://github.com/andrestubbe/fasttheme)** | Windows dark/light theme detection | **Impossible** in pure Java | 🚧 Beta |
| **[FastGraphics](https://github.com/andrestubbe/fastgraphics)** | GPU-accelerated 2D rendering | **600% faster** than Graphics2D | 🚧 Beta |
| **[FastTouch](https://github.com/andrestubbe/fasttouch)** | Native multi-touch input | **Impossible** in pure Java | 🚧 Beta |

---

## 🎯 Philosophy

| Aspect | JNI (FastJava) | JNA | Java Alone |
|--------|---------------|-----|------------|
| **Approach** | Direct native calls | libffi wrapper | JVM only |
| **Global OS Integration** | ✅ Full Win32 API access | ✅ Full access | ❌ **Cannot** - sandboxed |
| **Latency** | Lowest | Higher (ffi overhead) | GC pauses |
| **Development** | C++ per platform | Pure Java interfaces | Pure Java only |
| **Deployment** | Bundle platform DLLs | Single JAR | Single JAR |

**Java alone CANNOT do:** Global hotkeys, low-latency screen capture, reliable clipboard, hardware I/O.

---

## 📄 License

MIT License — See individual repositories for details.

---

**FastJava** — *Because performance matters.*
