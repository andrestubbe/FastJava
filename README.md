# FastJava — Native Java Performance Ecosystem

**⚡ Ultra-fast native Java libraries — JNI-based performance for automation, screen capture, clipboard, hotkeys, and more**

[![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)]()
[![Java](https://img.shields.io/badge/Java-17+-blue.svg)](https://www.java.com)
[![Platform](https://img.shields.io/badge/Platform-Windows%2010+-lightgrey.svg)]()
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![GitHub stars](https://img.shields.io/github/stars/andrestubbe/fastjava.svg)](https://github.com/andrestubbe/fastjava/stargazers)

FastJava is a collection of **high-performance JNI-based Java libraries** that replace slow Java standard library components with native Windows API implementations. Built for **speed**, **reliability**, and **deterministic performance**.

**Keywords:** java native library, jni performance, windows automation, java screen capture, clipboard library, global hotkeys, native java, fast java library, jitpack java, maven central

---

## 📦 Available Libraries

| Library | Purpose | Performance Gain | Status |
|---------|---------|-------------------|--------|
| **[FastClipboard](https://github.com/andrestubbe/fastclipboard)** | Native clipboard access | **2-3× faster** than AWT | ✅ Released |
| **[FastRobot](https://github.com/andrestubbe/fastrobot)** | Screen capture & automation | **10-17× faster** than Robot | ✅ Released |
| **[FastHotkey](https://github.com/andrestubbe/fasthotkey)** | Global system-wide hotkeys | **Impossible in pure Java** | ✅ Released |

---

## 🎯 Philosophy: Why JNI over JNA or Pure Java?

| Aspect | JNI (FastJava) | JNA | Java Alone |
|--------|---------------|-----|------------|
| **Performance** | Fastest - direct native calls | 10-50× slower (libffi overhead) | Limited by JVM |
| **Global OS Integration** | ✅ Full Win32 API access | ✅ Full access | ❌ **Cannot** - sandboxed |
| **Determinism** | Low latency, no GC jitter | Extra overhead | GC pauses |
| **Development** | C++ per platform | Pure Java interfaces | Pure Java only |
| **Deployment** | Bundle platform DLLs | Single JAR | Single JAR |

**FastJava uses JNI** for maximum performance and native OS integration. While JNA is easier to develop, JNI delivers the lowest latency—critical for automation, real-time capture, and hotkey handling.

**Java alone CANNOT do:**
- ❌ Global hotkeys (only works when app is focused)
- ❌ Low-latency screen capture
- ❌ Reliable clipboard operations
- ❌ Hardware-level input/output

---

## 🚀 Quick Start

### Prerequisites

- **JDK 17+** (JDK 21 recommended)
- **Windows 10/11** (Win32 API based)
- **Visual Studio 2019+** (for building native code from source)
- **Maven 3.8+**

### Using FastJava Libraries

All libraries are available via **JitPack** and **Maven Central**:

**Maven:**
```xml
<dependency>
    <groupId>io.github.andrestubbe</groupId>
    <artifactId>fastclipboard</artifactId>
    <version>1.0.0</version>
</dependency>
```

**Gradle:**
```groovy
implementation 'io.github.andrestubbe:fastclipboard:1.0.0'
```

**JitPack:**
```xml
<repository>
    <id>jitpack.io</id>
    <url>https://jitpack.io</url>
</repository>
```

---

## 📚 Library Documentation

### FastClipboard — Native Clipboard Access

Ultra-fast clipboard operations without Java AWT bugs.

```java
FastClipboard clipboard = new FastClipboard();
clipboard.setClipboardText("Hello, World!");
String text = clipboard.getClipboardText();
```

- **Features:** Text, images, file lists
- **Speed:** 2-3× faster than AWT
- **Stability:** No Java clipboard locking issues
- **[Documentation &rarr;](https://github.com/andrestubbe/fastclipboard)**

---

### FastRobot — High-Performance Automation

Replaces `java.awt.Robot` with DirectX screen capture and instant input.

```java
FastRobot robot = new FastRobot();
robot.mouseMove(500, 300);
// 60-240fps streaming
robot.startScreenStream(0, 0, 1920, 1080);
```

- **Features:** Screen capture, mouse/keyboard, 60-240fps streaming
- **Speed:** 10-17× faster than Robot, 515× faster mouse input
- **Tech:** DirectX DXGI, DirectInput, GDI BitBlt
- **[Documentation &rarr;](https://github.com/andrestubbe/fastrobot)**

---

### FastHotkey — Global System-Wide Hotkeys

Register hotkeys that work **even when your app is not focused**.

```java
FastHotkey.loadLibrary();
FastHotkey.register(1, 
    ModifierKeys.MOD_CONTROL | ModifierKeys.MOD_SHIFT, 
    KeyCodes.VK_F1,
    id -> System.out.println("Global hotkey pressed!")
);
FastHotkey.start();
```

- **Features:** Global hotkeys, callback-based events, unlimited registrations
- **Impossible in Java:** Requires native `RegisterHotKey` API
- **Use Cases:** Automation shortcuts, productivity tools, bot control
- **[Documentation &rarr;](https://github.com/andrestubbe/fasthotkey)**

---

## 🔧 Building from Source

Each library follows the same build process:

```batch
:: 1. Build native DLL
compile.bat

:: 2. Build Java library
mvn clean package

:: 3. Run demo
java -cp target/fasthotkey-1.0.0.jar fasthotkey.Demo
```

---

## 📊 Performance Comparison

| Operation | Java Standard | FastJava | Improvement |
|-----------|--------------|----------|-------------|
| Screen capture | `Robot.createScreenCapture()` | `FastRobot` | **10-17× faster** |
| Mouse latency | `Robot.mouseMove()` | `FastRobot` | **515× faster** |
| Clipboard get | `Toolkit.getClipboard()` | `FastClipboard` | **2-3× faster** |
| Global hotkeys | `AWTEventListener` | `FastHotkey` | **Impossible** → ✅ Works |

---

## 🗺️ Roadmap

### Released ✅
- FastClipboard v1.0 — Native clipboard access
- FastRobot v2.0 — DirectX screen capture & automation
- FastHotkey v1.0 — Global hotkeys

### Planned
- FastWindow — Native window control (focus, move, resize)
- FastInput — Low-level keyboard/mouse hooks
- FastMemory — Shared memory & IPC
- FastAudio — Low-latency audio capture
- FastOCR — Native text recognition

---

## 🤝 Contributing

Contributions welcome! Each library is independent but follows FastJava conventions:

1. **JNI-first** for performance-critical paths
2. **Maven + JitPack** distribution
3. **MIT License**
4. **Java 17+** baseline

See individual repository CONTRIBUTING.md files.

---

## 📄 License

All FastJava libraries are licensed under **MIT License**.

See [LICENSE](LICENSE) for details.

---

## 🔗 Links

- **FastClipboard:** https://github.com/andrestubbe/fastclipboard
- **FastRobot:** https://github.com/andrestubbe/fastrobot
- **FastHotkey:** https://github.com/andrestubbe/fasthotkey
- **JitPack:** https://jitpack.io/#andrestubbe
- **Maven Central:** https://search.maven.org/search?q=g:io.github.andrestubbe

---

**FastJava** — *Because performance matters.*
