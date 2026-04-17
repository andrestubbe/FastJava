MAP.md v2.3 — FastJava Capability Map
(vollständig verlinkt, architektur‑klar, SEO‑optimiert)

🧭 FastJava – Native Java Automation, Vision & AI Ecosystem
FastJava ist ein modulares, natives Java‑Ökosystem für:

[High‑Performance](https://de.wikipedia.org/wiki/Hochleistungsrechnen) [Automation](https://de.wikipedia.org/wiki/Automatisierung)

[Vision](https://de.wikipedia.org/wiki/Computer_Vision)‑[Pipelines](https://de.wikipedia.org/wiki/Pipeline_(Informatik))

[AI](https://de.wikipedia.org/wiki/K%C3%BCnstliche_Intelligenz)‑[Integration](https://de.wikipedia.org/wiki/Systemintegration)

[OS](https://de.wikipedia.org/wiki/Betriebssystem)‑Level [Interop](https://de.wikipedia.org/wiki/Interoperabilit%C3%A4t)

Native [Desktop](https://de.wikipedia.org/wiki/Desktop_( EDV))‑[Tools](https://de.wikipedia.org/wiki/Softwarewerkzeug)

High‑Speed [Image](https://de.wikipedia.org/wiki/Bildverarbeitung)/[Screen](https://de.wikipedia.org/wiki/Bildschirm) Processing

[Input](https://de.wikipedia.org/wiki/Eingabeger%C3%A4t)‑[Hooks](https://learn.microsoft.com/en-us/windows/win32/winmsg/hooks) & [System](https://de.wikipedia.org/wiki/Betriebssystem)‑[Events](https://de.wikipedia.org/wiki/Ereignis_(Programmierung))

[GPU](https://de.wikipedia.org/wiki/Grafikprozessor)‑beschleunigte [Workloads](https://de.wikipedia.org/wiki/Last_(Informatik))

FastJava kombiniert [JNI](https://de.wikipedia.org/wiki/Java_Native_Interface), [Win32](https://de.wikipedia.org/wiki/Windows_API), [DXGI](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/dx-graphics-dxgi), [RawInput](https://learn.microsoft.com/en-us/windows/win32/inputdev/raw-input), [SSE/AVX](https://de.wikipedia.org/wiki/Streaming_SIMD_Extensions), [DirectX](https://de.wikipedia.org/wiki/DirectX), [IOCP](https://learn.microsoft.com/en-us/windows/win32/fileio/i-o-completion-ports), [Whisper.cpp](https://github.com/ggerganov/whisper.cpp), [Ollama](https://ollama.com/), [OpenAI](https://openai.com/), [OpenCV](https://opencv.org/)‑ähnliche Pipelines und Java‑First APIs in einem einzigen, konsistenten Framework.

🧱 1. Architektur‑Stack
FastJava basiert auf einem klaren, vertikalen Stack:

Code
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
🔗 Relevante Technologie‑Links
[JNI](https://docs.oracle.com/javase/8/docs/technotes/guides/jni/) — [Java Native Interface](https://de.wikipedia.org/wiki/Java_Native_Interface) (Oracle Docs)

[Project Panama](https://openjdk.org/projects/panama/) — [FFI](https://de.wikipedia.org/wiki/Foreign_function_interface) für Java

[JNA](https://github.com/java-native-access/jna) — [Java Native Access](https://github.com/java-native-access/jna) (Vergleich)

[LWJGL](https://www.lwjgl.org/) — [Lightweight Java Game Library](https://www.lwjgl.org/) (Vergleich)

[Win32 API](https://learn.microsoft.com/en-us/windows/win32/apiindex/windows-api-list) — [Windows API](https://de.wikipedia.org/wiki/Windows_API) (Microsoft Docs)

[User32.dll](https://learn.microsoft.com/en-us/windows/win32/api/winuser/) — [Windows User API](https://learn.microsoft.com/en-us/windows/win32/api/winuser/)

[GDI+](https://learn.microsoft.com/en-us/windows/win32/gdiplus/-gdiplus-gdi-start) — [Graphics Device Interface Plus](https://de.wikipedia.org/wiki/Graphics_Device_Interface)

[DXGI Desktop Duplication](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/desktop-duplication-api) — [DirectX Graphics Infrastructure](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/dx-graphics-dxgi)

[DirectComposition](https://learn.microsoft.com/en-us/windows/win32/directcomp/directcomposition-portal) — [Windows Compositor](https://learn.microsoft.com/en-us/windows/win32/directcomp/directcomposition-portal)

[RawInput](https://learn.microsoft.com/en-us/windows/win32/inputdev/raw-input) — [Raw Input API](https://learn.microsoft.com/en-us/windows/win32/inputdev/raw-input)

[IOCP](https://learn.microsoft.com/en-us/windows/win32/fileio/i-o-completion-ports) — [I/O Completion Ports](https://learn.microsoft.com/en-us/windows/win32/fileio/i-o-completion-ports)

[Intel SIMD Intrinsics](https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html) — [SIMD Instructions](https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html)

[NVENC](https://developer.nvidia.com/nvidia-video-codec-sdk)/[NVDEC](https://developer.nvidia.com/nvidia-video-codec-sdk) — [NVIDIA Video Codec SDK](https://developer.nvidia.com/nvidia-video-codec-sdk)

⚙️ 2. Module Overview
Core Modules
FastJava Core  
Native Runtime, Memory, Buffers, [JNI](https://de.wikipedia.org/wiki/Java_Native_Interface) Layer, [Zero‑Copy](https://de.wikipedia.org/wiki/Zero-Copy), [SIMD](https://de.wikipedia.org/wiki/Single_Instruction_Multiple_Data).

FastDisplay  
[DXGI Desktop Duplication](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/desktop-duplication-api), Multi‑Monitor, High‑[FPS](https://de.wikipedia.org/wiki/Bilder_pro_Sekunde) Capture.

FastImage  
Native [Image Processing](https://de.wikipedia.org/wiki/Bildverarbeitung), [Filters](https://de.wikipedia.org/wiki/Filter_(Bildverarbeitung)), [Pixel‑Ops](https://de.wikipedia.org/wiki/Bildpunkt), [SIMD](https://de.wikipedia.org/wiki/Single_Instruction_Multiple_Data)‑Optimized.

FastRobot  
Mouse/Keyboard [Automation](https://de.wikipedia.org/wiki/Automatisierung), Pixel‑Search, [Vision‑Bots](https://de.wikipedia.org/wiki/Computer_Vision).
Vergleich: [AutoHotkey](https://www.autohotkey.com/)

FastInputHook  
[RawInput](https://learn.microsoft.com/en-us/windows/win32/inputdev/raw-input), Low‑Level [Hooks](https://learn.microsoft.com/en-us/windows/win32/winmsg/hooks), [HID](https://de.wikipedia.org/wiki/Human_Interface_Device) Events.

FastProcessWatch  
[IOCP](https://learn.microsoft.com/en-us/windows/win32/fileio/i-o-completion-ports)‑basierte Prozess‑Events, Window‑Tracking.

FastDiskView  
Native [File‑System](https://de.wikipedia.org/wiki/Dateisystem) Scans, [MFT](https://de.wikipedia.org/wiki/NTFS#Master_File_Table)‑Level Speed.

FastTheme  
Windows [Theme](https://learn.microsoft.com/en-us/windows/apps/desktop/modernize/apply-windows-themes)/Accent/Color [APIs](https://de.wikipedia.org/wiki/Programmierschnittstelle).

FastAnimation / FastTween  
High‑Performance [Interpolation](https://de.wikipedia.org/wiki/Interpolation_(Mathematik)), UI‑[Animation](https://de.wikipedia.org/wiki/Animation)‑Engine.

🧠 3. AI Modules
FastJava integriert AI‑Modelle lokal und remote:

FastAI  
Unified Java API für lokale & Cloud‑[LLMs](https://de.wikipedia.org/wiki/Large_Language_Model).

[Ollama](https://ollama.com/) — [Local LLMs](https://de.wikipedia.org/wiki/Large_Language_Model)

[OpenAI API](https://platform.openai.com/docs/api-reference) — [GPT Models](https://platform.openai.com/docs/models)

[Claude API](https://docs.anthropic.com/) — [Anthropic LLM](https://www.anthropic.com/claude)

[MCP](https://modelcontextprotocol.io/) — [Model Context Protocol](https://modelcontextprotocol.io/)

FastEmbedding  
[Embedding](https://de.wikipedia.org/wiki/Word2vec)‑Models (lokal & remote).

FastVectorDB  
Native [Vektorsuche](https://de.wikipedia.org/wiki/Vektorraum), [MMap](https://de.wikipedia.org/wiki/Memory_Mapping)‑Index, [Zero‑Copy](https://de.wikipedia.org/wiki/Zero-Copy).

FastWhisper  
[Whisper.cpp](https://github.com/ggerganov/whisper.cpp) Integration ([OpenAI Whisper](https://openai.com/research/whisper) Speech-to-Text).

FastVision (in Planung)  
[OpenCV](https://opencv.org/)‑ähnliche [Pipelines](https://de.wikipedia.org/wiki/Pipeline_(Informatik)), [GPU](https://de.wikipedia.org/wiki/Grafikprozessor)‑beschleunigt.
Vergleich: [OpenCV](https://opencv.org/)

🖼️ 4. Vision & Screen Modules
FastScreen  
[DXGI](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/dx-graphics-dxgi)‑Capture, Region‑Capture, Multi‑Monitor, 144–240 [FPS](https://de.wikipedia.org/wiki/Bilder_pro_Sekunde).

FastColor  
[Pixel](https://de.wikipedia.org/wiki/Bildpunkt)‑Ops, [Color‑Spaces](https://de.wikipedia.org/wiki/Farbraum) ([RGB](https://de.wikipedia.org/wiki/RGB-Farbraum), [HSV](https://de.wikipedia.org/wiki/HSV-Farbraum), [LAB](https://de.wikipedia.org/wiki/CIELAB)), [SIMD](https://de.wikipedia.org/wiki/Single_Instruction_Multiple_Data)‑Optimiert.

FastTemplateMatch  
Native [Template Matching](https://de.wikipedia.org/wiki/Template_Matching) ([SSE](https://de.wikipedia.org/wiki/Streaming_SIMD_Extensions)/[AVX](https://de.wikipedia.org/wiki/Advanced_Vector_Extensions)).

FastOCR  
[Tesseract](https://github.com/tesseract-ocr/tesseract)‑Integration ([OCR](https://de.wikipedia.org/wiki/Texterkennung) – Optical Character Recognition).

🧩 5. Automation Modules
FastHotkey  
Global [Hotkeys](https://de.wikipedia.org/wiki/Tastenkürzel), Low‑[Latency](https://de.wikipedia.org/wiki/Latenzzeit).

FastWindow  
[Window‑Management](https://de.wikipedia.org/wiki/Fenstermanager), Move/Resize/Focus.

FastClipboard  
Native [Clipboard](https://de.wikipedia.org/wiki/Zwischenablage) API.

FastSystem  
[CPU](https://de.wikipedia.org/wiki/Zentraleinheit)/[GPU](https://de.wikipedia.org/wiki/Grafikprozessor)/[Memory](https://de.wikipedia.org/wiki/Arbeitsspeicher)/[Process](https://de.wikipedia.org/wiki/Prozess_(Informatik)) Stats.

📊 6. Performance Claims (verankert)
FastJava nutzt:

[DXGI Desktop Duplication](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/desktop-duplication-api) für High‑[FPS](https://de.wikipedia.org/wiki/Bilder_pro_Sekunde) Capture

[RawInput](https://learn.microsoft.com/en-us/windows/win32/inputdev/raw-input) für Low‑[Latency](https://de.wikipedia.org/wiki/Latenzzeit) Input

[IOCP](https://learn.microsoft.com/en-us/windows/win32/fileio/i-o-completion-ports) für skalierbare [Events](https://de.wikipedia.org/wiki/Ereignis_(Programmierung))

[SIMD](https://de.wikipedia.org/wiki/Single_Instruction_Multiple_Data) ([SSE](https://de.wikipedia.org/wiki/Streaming_SIMD_Extensions)/[AVX](https://de.wikipedia.org/wiki/Advanced_Vector_Extensions)) für Image‑Ops

[Pinned Memory](https://docs.oracle.com/javase/8/docs/technotes/guides/jni/spec/functions.html#GetPrimitiveArrayCritical) + [Zero‑Copy](https://de.wikipedia.org/wiki/Zero-Copy) für [JNI](https://de.wikipedia.org/wiki/Java_Native_Interface)

[DirectX 11/12](https://de.wikipedia.org/wiki/DirectX) für [GPU](https://de.wikipedia.org/wiki/Grafikprozessor)‑Pipelines

🔗 Performance‑Kontext
[JMH](https://openjdk.org/projects/code-tools/jmh/) — [Java Microbenchmark Harness](https://openjdk.org/projects/code-tools/jmh/)

[DXGI Perf Notes](https://learn.microsoft.com/en-us/windows/win32/direct3ddxgi/desktop-duplication-api) — Desktop Duplication Performance

[IOCP Performance](https://learn.microsoft.com/en-us/windows/win32/fileio/i-o-completion-ports) — Scalable I/O

[SIMD Guide](https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html) — Intel Intrinsics Guide

🧭 7. Positionierung im Ökosystem
FastJava steht zwischen:

Technologie	Rolle	Vergleich
[LWJGL](https://www.lwjgl.org/)	Native [Gaming](https://de.wikipedia.org/wiki/Spieleprogrammierung)	FastJava = Native Automation/Vision
[JNA](https://github.com/java-native-access/jna)	Einfach, langsam	FastJava = schnell, minimal, modern
[AutoHotkey](https://www.autohotkey.com/)	[Automation](https://de.wikipedia.org/wiki/Automatisierung)	FastJava = native, modular, Java‑First
[OpenCV](https://opencv.org/)	[Vision](https://de.wikipedia.org/wiki/Computer_Vision)	FastJava = Vision + Automation + AI
[Ollama](https://ollama.com/)/[OpenAI](https://openai.com/)	[AI](https://de.wikipedia.org/wiki/K%C3%BCnstliche_Intelligenz)	FastJava = Unified Java AI Layer
📚 8. Inspirations‑ & Kontext‑Links
„[Java is not dead](https://www.infoq.com/articles/java-is-not-dead/)" — InfoQ Article

[Rust Blog](https://blog.rust-lang.org/) (Why [native](https://de.wikipedia.org/wiki/Nativer_Code) matters)

[AutoHotkey Community](https://www.autohotkey.com/boards/) — Automation Forums

🚀 9. Roadmap (Kurzfassung)
FastVision [GPU](https://de.wikipedia.org/wiki/Grafikprozessor)‑[Pipeline](https://de.wikipedia.org/wiki/Pipeline_(Informatik))

FastVideo ([NVENC](https://developer.nvidia.com/nvidia-video-codec-sdk)/[NVDEC](https://developer.nvidia.com/nvidia-video-codec-sdk))

FastUI ([DirectComposition](https://learn.microsoft.com/en-us/windows/win32/directcomp/directcomposition-portal)‑basierte [Overlays](https://de.wikipedia.org/wiki/Overlay))

FastAI Tools ([Agents](https://de.wikipedia.org/wiki/Softwareagent), Tools, [Memory](https://de.wikipedia.org/wiki/Speicher_(Informatik)))

FastJava Website

Full Example Suite

Benchmark Suite

📎 10. Quick Links
[FastJava Repo](https://github.com/andrestubbe/fastjava)

[Module Repos](https://github.com/andrestubbe)

[Demos](https://github.com/andrestubbe/fastjava-demos)

[Benchmarks](https://github.com/andrestubbe/fastjava-benchmarks)

[Roadmap](./ROADMAP.md)

[Examples](https://github.com/andrestubbe/fastjava-examples)
