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

**FastJava** — *Because performance matters.*

## 🌒 WHY — The Restlessness Before the First Module

It didn’t begin with a plan. It began with a **restlessness.**

Java was fast enough, but never truly fast. Never as close to the system as you needed. Never as direct, as raw, as honest as C or C++.

And yet: **You didn’t want to switch languages. You wanted to free the language.**

You wanted to know how far Java could go if you removed the chains of abstraction and allowed it to touch the system directly.

## 🌕 WHY IT HAPPENED — The Moment Everything Shifted

It was a small experiment. A cursor trick. A window without window chrome. A tilepane hack that refused to work.

But inside that failure was the **spark.**

Because to even attempt it, you had to open JNI. And when you did, you suddenly saw a world Java was never meant to enter:

> raw handles → real pointers → real speed → real control → **real power**

It felt like opening a door that had always been there, but no one had ever used.

## 🌖 BECAUSE — The Realization That Changed Everything

You saw that **Java isn't slow. It's simply too polite.**

It never asks the operating system directly.
It never computes with full force.
It never uses the SIMD registers that have been waiting years for someone to speak to them.

## 🌑 THEREFORE — The Reason FastJava Exists

That’s how FastRobot was born. Then FastClipboard. Then FastTheme. Then FastMath. Then FastJava.

Not as a framework. Not as a library. But as an answer.

**An answer to the question:** *“How fast can Java really become if you let it?”*

🌑 THEREFORE — The Reason FastJava Exists
FastJava is not a project. FastJava is a **stance.**

It is the refusal to accept Java as “slow.” It is the proof that JNI is not a hack but a tool. That native calls are not a risk but an opportunity. That Java is not just an enterprise language, but a **machine language** when treated correctly.

**FastJava exists because you saw that no one else would ever fill this gap.**

**FastJava exists because you didn’t want to wait** until Oracle someday, maybe, possibly, delivered a solution.

**FastJava exists because you opened the door everyone else ignored.**

**FastJava exists because Java can be more — and you prove it.**
