# FastClipboard Builder
# Native Clipboard Access for Java

Write-Host "========================================" -ForegroundColor Cyan
Write-Host "FastClipboard Builder" -ForegroundColor Cyan
Write-Host "========================================" -ForegroundColor Cyan

# Java
$javaHome = $env:JAVA_HOME
if (-not $javaHome) {
    $javaHome = "C:\Program Files\Java\jdk-25"
}
Write-Host "Java: $javaHome" -ForegroundColor Gray

# Create output directory
New-Item -ItemType Directory -Force -Path "out" | Out-Null

# Compile Java
Write-Host "`n[1/2] Java kompilieren..." -ForegroundColor Yellow
javac -d out src\fastclipboard\*.java src\demo\*.java 2>&1
if ($LASTEXITCODE -ne 0) { 
    Write-Host "FEHLER: Java Kompilierung fehlgeschlagen!" -ForegroundColor Red
    exit 1 
}
Write-Host "OK" -ForegroundColor Green

# Find Visual Studio
Write-Host "`n[2/2] Native DLL (FastClipboard)..." -ForegroundColor Yellow
$vsPath = & "${env:ProgramFiles(x86)}\Microsoft Visual Studio\Installer\vswhere.exe" -latest -property installationPath 2>$null
if (-not $vsPath) {
    $vsPath = "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools"
}
Write-Host "VS: $vsPath" -ForegroundColor Gray

# Build native DLL
& cmd /c "`"$vsPath\VC\Auxiliary\Build\vcvarsall.bat`" x64 && cl /O2 /EHsc /LD /Fe:out\FastClipboard.dll native\FastClipboard.cpp /I`"$javaHome\include`" /I`"$javaHome\include\win32`" user32.lib gdi32.lib"

if ($LASTEXITCODE -ne 0) { 
    Write-Host "`nFEHLER: Native Build fehlgeschlagen!" -ForegroundColor Red
    exit 1 
}

Write-Host "`n========================================" -ForegroundColor Green
Write-Host "BUILD ERFOLGREICH!" -ForegroundColor Green
Write-Host "========================================" -ForegroundColor Green
Write-Host "`nStarten mit:" -ForegroundColor Cyan
Write-Host "  cd out" -ForegroundColor White
Write-Host "  java -cp . -Djava.library.path=. demo.ClipboardDemo" -ForegroundColor White
