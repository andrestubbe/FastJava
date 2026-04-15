# FastJava — The Real Vision Document
### Perspective: Game Bot Developer + Designer, April 2026

---

## Was hier wirklich entstehen kann

Java fehlen im Gaming/Bot-Bereich nicht die Köpfe. Es fehlen die Werkzeuge.
Jeder ernsthafte Bot-Entwickler springt nach Python oder C++ — nicht weil Java schlecht ist,
sondern weil Java keine brauchbaren Low-Level-Handles hat.

**FastJava ist die Brücke, die es nie gab.**

---

## Die echte Marktchance

Ech Bot-Entwickler brauchen heute:
- **Screen Capture unter 5ms** — Java Robot: 60-120ms. Nicht nutzbar.
- **Input Injection ohne AWT** — Robot.mouseMove hat 20ms delay. Bots sterben dadurch.
- **Global Hotkeys** — In Java schlicht unmöglich ohne Polling-Loops.
- **Window Control** — Fremde Fenster targetieren. Java hat null dafür.
- **Lokal laufende AI** — Ollama/LMStudio. Kein Java-Client der Schmerz vermeidet.

Das alles existiert in Python-Land (`pyautogui`, `pynput`, `win32api`).
In Java: Nichts. Ein riesiges Vakuum.

**Wer das füllt, zieht tausende Java-Entwickler an, die bislang für Automation zu Python gewechselt sind.**

---

## Der MVP: Eine echte Vision, kein Experiment

### Das Produkt

Ein vollständiger, lokaler AI-Game-Bot in Java.
Lokal. Kein Cloud. Kein API-Key. Keine Python-Dependencies.

```
Screen lesen → AI denkt (Ollama) → Bot handelt
```

Das klingt einfach. Ist es nicht — weil heute kein einziges Java-Tool existiert,
das diesen Loop unter 100ms macht.

FastJava v0.1.0 macht das möglich.

---

## Modul 1: `fast-screen`
**Was:** Regionen des Bildschirms in <5ms in den RAM holen.
**Wie:** DXGI DesktopDuplication API (Windows) → DirectByteBuffer, zero-copy.
**Warum jetzt:** Das ist der Eingabe-Kanal jedes Bots. Ohne das startet nichts.
**Deliverable:** `ScreenFrame frame = FastScreen.grab(x, y, width, height);`

## Modul 2: `fast-robot`
**Was:** Maus und Tastatur mit OS-Level Timing. Keine Delays.
**Wie:** Win32 `SendInput()` direkt via JNI, kein AWT-Umweg.
**Warum jetzt:** Das ist der Ausgabe-Arm des Bots. Ohne das passiert nichts.
**Deliverable:** `FastRobot.click(x, y); FastRobot.type("hello");`

## Modul 3: `fast-hotkey`
**Was:** Global Hotkeys — überall im System, sofort.
**Wie:** `SetWindowsHookEx` via JNI, kein Polling.
**Warum jetzt:** Bot starten/stoppen ohne Fokus auf dem Fenster. Basic requirement.
**Deliverable:** `FastHotkey.on(Key.F9, () -> bot.toggle());`

## Modul 4: `fast-ai`
**Was:** Tiny Java-Client für Ollama / LM Studio.
**Wie:** Pure HTTP/WebSocket, zero dependencies, ~2 Klassen.
**Warum jetzt:** Das ist das Gehirn. Screen-Input → AI-Decision → Robot-Output.
**Deliverable:**
```java
FastAI ai = FastAI.local("llama3.2-vision");
String action = ai.ask(frame, "What button should I click?");
```

## Modul 5: `fast-core`
**Was:** NativeLoader + Gradle/CMake Build-Pipeline.
**Wie:** DLL wird ins JAR embedded, beim ersten Aufruf extrahiert und geladen.
**Warum jetzt:** Ohne das kann niemand die Library deployen. Blocker für alles.
**Deliverable:** `<dependency>com.github.andrestubbe:fast-screen:0.1.0</dependency>` — und es funktioniert.

---

## Das Showcase Demo: "VisionBot"

Ein Bot, der ein Browser-Spiel (oder eine einfache App) via Vision+AI spielt.

**User Flow:**
1. Nutzer startet das Demo-Projekt.
2. Zeigt auf ein offenes Fenster.
3. `FastScreen` liest Region aus.
4. `FastAI` (Ollama) entscheidet: "Click the green button at 420, 300"
5. `FastRobot` führt aus.
6. Wiederholt sich. Loop läuft bei <100ms/Frame.

**Was das zeigt:** Den kompletten Stack, live, in einem GitHub-Repo.
Jeder der das sieht, versteht sofort den Wert.

---

## Design-Direktiven (für alle Module)

Als Designer muss jedes Modul folgende Regeln einhalten:

| Regel | Grund |
|-------|-------|
| **Ein API-Konzept, max. 3 Klassen** | Agents können 3 Klassen in Sekunden grokken |
| **Zero Config** | `FastScreen.grab()` — kein Setup erforderlich |
| **Keine checked Exceptions nach außen** | Bricht Flow. RuntimeException oder Result-Type. |
| **Synchron UND async** | Sync für Einstieg, async für echte Pipelines |
| **Prebuilt DLLs im JAR** | Niemand kompiliert C++ für ein Dependency |

---

## Was in Backlog landet (Phase 2, post-Traction)

Diese Module sind real und wichtig — aber danach:

- `FastTheme` — Decoration control (Win32 DWM). Schön, aber kein Bot-Feature.
- `FastWindow` — Window focus, move, Z-Order. Bot-Enhancement, nicht Kern.
- `FastGraphics` — GPU Rendering, DirectX Present. Renderings, kein Bot-Feature.
- `FastWatch` — Live Variable Inspector. DX Tool, nicht Produkt.
- `FastCallTrace` — Stack Introspection. DX Tool, nicht Produkt.
- `FastMath` — SIMD-Beschleunigung. Performance-Tuning, nicht Adoption-Killer.
- `Optimizer` — Meta-JIT-Optimizer. Research-Goldmine, aber 3 Monate Arbeit.

---

## Roadmap

| Milestone | Was | Wann |
|-----------|-----|------|
| **M0** | Gradle Monorepo + CMake Blueprint (fast-core) | Sofort |
| **M1** | fast-screen v0.1.0 Released (JitPack) | Woche 1-2 |
| **M2** | fast-robot v0.1.0 Released (JitPack) | Woche 2 |
| **M3** | fast-hotkey v0.1.0 Released (JitPack) | Woche 2-3 |
| **M4** | fast-ai v0.1.0 Released (Ollama Client) | Woche 3 |
| **M5** | VisionBot Demo Repo live | Woche 3-4 |
| **M6** | Maven Central Publishing | Nach M5 |
| **Phase 2** | FastTheme, FastWindow, FastGraphics | Post-Traction |

---

## Warum das keine Nische ist

**Bot-Automation** klingt klein. Ist es nicht:

- Jeder Accessibility-Tool-Entwickler braucht das.
- Jeder QA-Automatisierer braucht das.
- Jeder AI-Agent-Entwickler mit Java-Background braucht das.
- Jeder Java-Gamer-Hobbyist braucht das.
- **Jeder, der pytest auf Python geschrieben und dann mühsam Java-Bridges gebaut hat**, braucht das.

Das sind hunderttausende Entwickler, die Java mögen aber für Automation zu Python fliehen.

**Die Lücke ist riesig. FastJava ist der erste der sie schließt.**
