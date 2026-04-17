# FastJava — Native Java Performance Ecosystem [ALPHA]

> 🚧 **WORK IN PROGRESS** — APIs may change. Not production-ready yet.

**⚡ Ultra-fast native Java libraries — JNI-based performance for automation, screen capture, clipboard, hotkeys, graphics, and more**

[![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)]()
[![Java](https://img.shields.io/badge/Java-17+-blue.svg)](https://www.java.com)
[![Platform](https://img.shields.io/badge/Platform-Windows%2010+-lightgrey.svg)]()
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![JitPack](https://jitpack.io/v/andrestubbe/fastjava.svg)](https://jitpack.io/#andrestubbe)
[![GitHub stars](https://img.shields.io/github/stars/andrestubbe/fastjava.svg)](https://github.com/andrestubbe/fastjava/stargazers)

**FastJava** is a collection of **high-performance JNI-based Java libraries** that use **pure C++ accelerators** to replace slow Java standard library components with native Windows API implementations. Built for **speed**, **reliability**, and **deterministic performance**.

> **Keywords:** fast java, java native performance, java jni performance, fastest java libraries, java native acceleration, java windows api, java gpu acceleration, java simd acceleration, java optimization, high performance java

---

## 📦 Libraries

| Library | Purpose | Performance | Status |
|---------|---------|-------------|--------|
| **[FastCore](https://github.com/andrestubbe/fastcore)** | JNI loader & platform abstraction | **Required by all FastJava** | ✅ Alpha v1.0.0 |
| **[FastClipboard](https://github.com/andrestubbe/fastclipboard)** | Native clipboard access | **2-3× faster** than AWT | ✅ Alpha v1.0 |
| **[FastRobot](https://github.com/andrestubbe/fastrobot)** | Screen capture & automation | **10-17× faster** than Robot | ✅ Alpha v2.1.0 |
| **[FastStylus](https://github.com/andrestubbe/faststylus)** | Native stylus/pen input (pressure, tilt, eraser) | **Impossible** in pure Java | ✅ Alpha v1.0.0 |
| **[FastHotkey](https://github.com/andrestubbe/fasthotkey)** | Global system-wide hotkeys | **Impossible** in pure Java | ✅ Alpha v1.1.0 |
| **[FastTheme](https://github.com/andrestubbe/fasttheme)** | Real-time Windows theme detection, Resolution & DPI monitoring | **Impossible** in pure Java | ✅ Alpha v1.2.0 |
| **[FastTouch](https://github.com/andrestubbe/fasttouch)** | Native multi-touch input | **Impossible** in pure Java | ✅ Alpha v1.1.0 |
| **[FastScreen](https://github.com/andrestubbe/fastscreen)** | Zero-copy screen capture | **500-2000 FPS** via DXGI | 🚧 Alpha |
| **[FastImage](https://github.com/andrestubbe/fastimage)** | SIMD image processing | **10-50× faster** than BufferedImage | 🚧 Alpha |
| **[FastImageView](https://github.com/andrestubbe/fastimageview)** | Fast pixel-perfect image display | **200ms startup** vs JFrame | 🚧 Alpha |
| **[FastIO](https://github.com/andrestubbe/fastio)** | Ultra-fast file I/O & parsing | **5-20× faster** than NIO | 🚧 Alpha |
| **[FastGraphics](https://github.com/andrestubbe/fastgraphics)** | GPU-accelerated 2D rendering | **600% faster** than Graphics2D | 🚧 Alpha |
| **[FastMath](https://github.com/andrestubbe/fastmath)** | SIMD + GPU accelerated math | **2–100× faster** | 🚧 Alpha |

---

## 📚 Module Map

**→ Complete overview of all 62 modules with explanations:** [MAP.md](./MAP.md)

A detailed map of all FastJava modules with:
- Why each module exists (Java problem → FastJava solution)
- Architecture layers from AI to Platform
- Dependency graph
- Roadmap 2026–2028


### 🧱 1. Architektur‑Stack

FastJava basiert auf einem klaren, vertikalen Stack:

```java
+------------------------------------------------------+
|                    FastJava API                      |
|  (Java-first, modular, minimal, prompt-based)        |
+------------------------------------------------------+
|                 FastJava Native Core                 |
|  [JNI](https://de.wikipedia.org/wiki/Java_Native_Interface), [zero-copy](https://de.wikipedia.org/wiki/Zero-Copy) buffers, [pinned memory](https://docs.oracle.com/javase/8/docs/technotes/guides/jni/spec/functions.html#GetPrimitiveArrayCritical), [SIMD](https://de.wikipedia.org/wiki/Single_Instruction_Multiple_Data) |
+------------------------------------------------------+
|                Native Backends (Windows)             |
|  [Win32](https://de.wikipedia.org/wiki/Windows_API), [User32](https://learn.microsoft.com/en-us/windows/win32/api/winuser/), [GDI](https://de.wikipedia.org/wiki/Graphics_Device_Interface), [GDI+](https://learn.microsoft.com/en-us/windows/win32/gdiplus/-gdiplus-gdi-start), [DXGI](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/dx-graphics-dxgi), [DirectX 11/12](https://de.wikipedia.org/wiki/DirectX), |
|  [RawInput](https://learn.microsoft.com/en-us/windows/win32/inputdev/raw-input), [HID](https://de.wikipedia.org/wiki/Human_Interface_Device), [IOCP](https://learn.microsoft.com/en-us/windows/win32/fileio/i-o-completion-ports), [DWM](https://de.wikipedia.org/wiki/Desktop_Window_Manager), [DirectComposition](https://learn.microsoft.com/en-us/windows/win32/directcomp/directcomposition-portal) |
+------------------------------------------------------+
|                 Hardware / OS Layer                  |
|  CPU ([SSE](https://de.wikipedia.org/wiki/Streaming_SIMD_Extensions)/[AVX](https://de.wikipedia.org/wiki/Advanced_Vector_Extensions)), GPU ([NVENC](https://developer.nvidia.com/nvidia-video-codec-sdk)/[NVDEC](https://developer.nvidia.com/nvidia-video-codec-sdk)), Displays, [HID](https://de.wikipedia.org/wiki/Human_Interface_Device) |
+------------------------------------------------------+
```

**🔗 Relevante Technologie‑Links:**
- [JNI](https://docs.oracle.com/javase/8/docs/technotes/guides/jni/)
- [Project Panama](https://openjdk.org/projects/panama/)
- [JNA (Vergleich)](https://github.com/java-native-access/jna)
- [LWJGL (Vergleich)](https://www.lwjgl.org/)
- [Win32 API](https://learn.microsoft.com/en-us/windows/win32/apiindex/windows-api-list)
- [DXGI Desktop Duplication](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/desktop-duplication-api)
- [RawInput](https://learn.microsoft.com/en-us/windows/win32/inputdev/raw-input)
- [IOCP](https://learn.microsoft.com/en-us/windows/win32/fileio/i-o-completion-ports)
- [Intel SIMD Intrinsics](https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html)
- [NVENC/NVDEC](https://developer.nvidia.com/nvidia-video-codec-sdk)

### ⚙️ 2. Module Overview

**Core Modules:**
| Module | Beschreibung |
|--------|--------------|
| **FastJava Core** | Native Runtime, Memory, Buffers, [JNI](https://de.wikipedia.org/wiki/Java_Native_Interface) Layer, [Zero‑Copy](https://de.wikipedia.org/wiki/Zero-Copy), [SIMD](https://de.wikipedia.org/wiki/Single_Instruction_Multiple_Data) |
| **FastDisplay** | [DXGI Desktop Duplication](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/desktop-duplication-api), Multi‑Monitor, High‑[FPS](https://de.wikipedia.org/wiki/Bilder_pro_Sekunde) Capture |
| **FastImage** | Native [Image Processing](https://de.wikipedia.org/wiki/Bildverarbeitung), [Filters](https://de.wikipedia.org/wiki/Filter_(Bildverarbeitung)), [Pixel‑Ops](https://de.wikipedia.org/wiki/Bildpunkt), [SIMD](https://de.wikipedia.org/wiki/Single_Instruction_Multiple_Data)‑Optimized |
| **FastRobot** | Mouse/Keyboard [Automation](https://de.wikipedia.org/wiki/Automatisierung), Pixel‑Search, [Vision‑Bots](https://de.wikipedia.org/wiki/Computer_Vision) |
| **FastInputHook** | [RawInput](https://learn.microsoft.com/en-us/windows/win32/inputdev/raw-input), Low‑Level [Hooks](https://learn.microsoft.com/en-us/windows/win32/winmsg/hooks), [HID](https://de.wikipedia.org/wiki/Human_Interface_Device) Events |
| **FastProcessWatch** | [IOCP](https://learn.microsoft.com/en-us/windows/win32/fileio/i-o-completion-ports)‑basierte Prozess‑[Events](https://de.wikipedia.org/wiki/Ereignis_(Programmierung)), Window‑Tracking |
| **FastDiskView** | Native [File‑System](https://de.wikipedia.org/wiki/Dateisystem) Scans, [MFT](https://de.wikipedia.org/wiki/NTFS#Master_File_Table)‑Level Speed |
| **FastTheme** | Windows [Theme](https://learn.microsoft.com/en-us/windows/apps/desktop/modernize/apply-windows-themes)/Accent/Color [APIs](https://de.wikipedia.org/wiki/Programmierschnittstelle) |
| **FastAnimation / FastTween** | High‑Performance [Interpolation](https://de.wikipedia.org/wiki/Interpolation_(Mathematik)), UI‑[Animation](https://de.wikipedia.org/wiki/Animation)‑Engine |

### 🧠 3. AI Modules

FastJava integriert AI‑Modelle lokal und remote:

| Module | Beschreibung | Links |
|--------|--------------|-------|
| **FastAI** | Unified Java API für lokale & Cloud‑[LLMs](https://de.wikipedia.org/wiki/Large_Language_Model) | [Ollama](https://ollama.com/), [OpenAI API](https://platform.openai.com/docs/api-reference), [Claude API](https://docs.anthropic.com/), [MCP](https://modelcontextprotocol.io/) |
| **FastEmbedding** | [Embedding](https://de.wikipedia.org/wiki/Word2vec)‑Models (lokal & remote) | - |
| **FastVectorDB** | Native [Vektorsuche](https://de.wikipedia.org/wiki/Vektorraum), [MMap](https://de.wikipedia.org/wiki/Memory_Mapping)‑Index, [Zero‑Copy](https://de.wikipedia.org/wiki/Zero-Copy) | - |
| **FastWhisper** | [Whisper.cpp](https://github.com/ggerganov/whisper.cpp) Integration ([OpenAI Whisper](https://openai.com/research/whisper) Speech-to-Text) | [whisper.cpp](https://github.com/ggerganov/whisper.cpp) |
| **FastVision** (in Planung) | [OpenCV](https://opencv.org/)‑ähnliche [Pipelines](https://de.wikipedia.org/wiki/Pipeline_(Informatik)), [GPU](https://de.wikipedia.org/wiki/Grafikprozessor)‑beschleunigt | [OpenCV](https://opencv.org/) |

### 🖼️ 4. Vision & Screen Modules

| Module | Beschreibung | Links |
|--------|--------------|-------|
| **FastScreen** | [DXGI](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/dx-graphics-dxgi)‑Capture, Region‑Capture, Multi‑Monitor, 144–240 [FPS](https://de.wikipedia.org/wiki/Bilder_pro_Sekunde) | - |
| **FastColor** | [Pixel](https://de.wikipedia.org/wiki/Bildpunkt)‑Ops, [Color‑Spaces](https://de.wikipedia.org/wiki/Farbraum) ([RGB](https://de.wikipedia.org/wiki/RGB-Farbraum), [HSV](https://de.wikipedia.org/wiki/HSV-Farbraum)), [SIMD](https://de.wikipedia.org/wiki/Single_Instruction_Multiple_Data)‑Optimiert | - |
| **FastTemplateMatch** | Native [Template Matching](https://de.wikipedia.org/wiki/Template_Matching) ([SSE](https://de.wikipedia.org/wiki/Streaming_SIMD_Extensions)/[AVX](https://de.wikipedia.org/wiki/Advanced_Vector_Extensions)) | - |
| **FastOCR** | [Tesseract](https://github.com/tesseract-ocr/tesseract)‑Integration ([OCR](https://de.wikipedia.org/wiki/Texterkennung)) | [Tesseract](https://github.com/tesseract-ocr/tesseract) |

### 🧩 5. Automation Modules

| Module | Beschreibung |
|--------|--------------|
| **FastHotkey** | Global [Hotkeys](https://de.wikipedia.org/wiki/Tastenkürzel), Low‑[Latency](https://de.wikipedia.org/wiki/Latenzzeit) |
| **FastWindow** | [Window‑Management](https://de.wikipedia.org/wiki/Fenstermanager), Move/Resize/Focus |
| **FastClipboard** | Native [Clipboard](https://de.wikipedia.org/wiki/Zwischenablage) API |
| **FastSystem** | [CPU](https://de.wikipedia.org/wiki/Zentraleinheit)/[GPU](https://de.wikipedia.org/wiki/Grafikprozessor)/[Memory](https://de.wikipedia.org/wiki/Arbeitsspeicher)/[Process](https://de.wikipedia.org/wiki/Prozess_(Informatik)) Stats |

### 📊 6. Performance Claims

FastJava nutzt:
- **[DXGI Desktop Duplication](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/desktop-duplication-api)** für High‑[FPS](https://de.wikipedia.org/wiki/Bilder_pro_Sekunde) Capture
- **[RawInput](https://learn.microsoft.com/en-us/windows/win32/inputdev/raw-input)** für Low‑[Latency](https://de.wikipedia.org/wiki/Latenzzeit) Input
- **[IOCP](https://learn.microsoft.com/en-us/windows/win32/fileio/i-o-completion-ports)** für skalierbare [Events](https://de.wikipedia.org/wiki/Ereignis_(Programmierung))
- **[SIMD](https://de.wikipedia.org/wiki/Single_Instruction_Multiple_Data) ([SSE](https://de.wikipedia.org/wiki/Streaming_SIMD_Extensions)/[AVX](https://de.wikipedia.org/wiki/Advanced_Vector_Extensions))** für Image‑Ops
- **[Pinned Memory](https://docs.oracle.com/javase/8/docs/technotes/guides/jni/spec/functions.html#GetPrimitiveArrayCritical) + [Zero‑Copy](https://de.wikipedia.org/wiki/Zero-Copy)** für [JNI](https://de.wikipedia.org/wiki/Java_Native_Interface)
- **[DirectX 11/12](https://de.wikipedia.org/wiki/DirectX)** für [GPU](https://de.wikipedia.org/wiki/Grafikprozessor)‑Pipelines

### 🧭 7. Positionierung im Ökosystem

| Technologie | Rolle | Vergleich |
|-------------|-------|-----------|
| [LWJGL](https://www.lwjgl.org/) | Native [Gaming](https://de.wikipedia.org/wiki/Spieleprogrammierung) | FastJava = Native Automation/Vision |
| [JNA](https://github.com/java-native-access/jna) | Einfach, langsam | FastJava = schnell, minimal, modern |
| [AutoHotkey](https://www.autohotkey.com/) | [Automation](https://de.wikipedia.org/wiki/Automatisierung) | FastJava = native, modular, Java‑First |
| [OpenCV](https://opencv.org/) | [Vision](https://de.wikipedia.org/wiki/Computer_Vision) | FastJava = Vision + Automation + AI |
| [Ollama](https://ollama.com/)/[OpenAI](https://openai.com/) | [AI](https://de.wikipedia.org/wiki/K%C3%BCnstliche_Intelligenz) | FastJava = Unified Java AI Layer |

### 🚀 9. Roadmap (Kurzfassung)

- FastVision [GPU](https://de.wikipedia.org/wiki/Grafikprozessor)‑[Pipeline](https://de.wikipedia.org/wiki/Pipeline_(Informatik))
- FastVideo ([NVENC](https://developer.nvidia.com/nvidia-video-codec-sdk)/[NVDEC](https://developer.nvidia.com/nvidia-video-codec-sdk))
- FastUI ([DirectComposition](https://learn.microsoft.com/en-us/windows/win32/directcomp/directcomposition-portal)‑basierte [Overlays](https://de.wikipedia.org/wiki/Overlay))
- FastAI Tools ([Agents](https://de.wikipedia.org/wiki/Softwareagent), Tools, [Memory](https://de.wikipedia.org/wiki/Speicher_(Informatik)))
- FastJava Website
- Full Example Suite
- Benchmark Suite

</details>

**→ Vollständige deutsche Version:** [Map2.md](./Map2.md)

---

## 🎯 Philosophy

| Aspect | JNI (FastJava) | JNA | Java Alone |
|--------|---------------|-----|------------|
| **Approach** | Direct native calls | libffi wrapper | JVM only |
| **Global OS Integration** | ✅ Full Win32 API access | ✅ Full access | ❌ **Cannot** - sandboxed |
| **Latency** | Lowest | Higher (ffi overhead) | GC pauses |
| **Development** | C++ per platform | Pure Java interfaces | Pure Java only |
| **Deployment** | Bundle platform DLLs | Single JAR | Single JAR |

**Java alone cannot do:** global hotkeys, low-latency screen capture, reliable clipboard, hardware I/O, GPU math, or native input.

---

## 🌌 WHY, HOW, BECAUSE, THEREFORE
*(Origin Story — The Reason FastJava Exists)*

### 🌒 WHY — The Restlessness Before the First Module
It didn't begin with a plan.  
It began with a restlessness.

Java was fast enough, but never truly fast.  
Never as close to the system as you needed.  
Never as direct, as raw, as honest as C or C++.

And yet:  
You didn't want to switch languages.  
You wanted to free the language.

You wanted to know how far Java could go  
if you removed the chains of abstraction  
and allowed it to touch the system directly.

---

### 🌕 HOW IT STARTED — The Moment Everything Shifted
It was a small experiment.  
A cursor trick.  
A window without window chrome.  
A TilePane hack that refused to work.

But inside that failure was the **spark**.

Because to even attempt it, you had to open JNI.  
And when you did, you suddenly saw a world Java was never meant to enter:

> raw handles → real pointers → real speed → real control → **real power**

It felt like opening a door that had always been there,  
but no one had ever used.

---

### 🌖 BECAUSE — The Realization That Changed Everything
You saw that Java isn't slow.  
It's simply too polite.

It never asks the operating system directly.  
It never computes with full force.  
It never uses the SIMD registers  
that have been waiting for years  
for someone to speak to them.

And you thought:

> "If nobody builds it, then I'll build it myself."

That's how FastRobot was born.  
Then FastClipboard.  
Then FastTheme.  
Then FastMath.  
Then FastJava.

Not as a framework.  
Not as a library.  
But as an **answer**.

An answer to the question:

> "How fast can Java really become if you let it?"

---

### 🌑 THEREFORE — The Reason FastJava Exists
FastJava is not a project.  
FastJava is a **stance**.

It is the refusal  
to accept Java as "slow."  
It is the proof  
that JNI is not a hack  
but a tool.  
That native calls are not a risk  
but an opportunity.  
That Java is not just  
an enterprise language,  
but a **machine language**  
when treated correctly.

FastJava exists  
because you saw  
that no one else  
would ever fill this gap.

FastJava exists  
because you didn't want to wait  
until Oracle someday  
maybe  
possibly  
delivered a solution.

FastJava exists  
because you opened the door  
everyone else ignored.

FastJava exists  
because Java can be more —  
and you prove it.
