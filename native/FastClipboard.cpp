/**
 * FastClipboard - Native Windows Implementation
 */

#include <jni.h>
#include <windows.h>

#pragma comment(lib, "user32.lib")

extern "C" {

JNIEXPORT jstring JNICALL Java_fastclipboard_FastClipboard_getTextNative(JNIEnv* env, jclass) {
    if (!OpenClipboard(nullptr)) {
        return nullptr;
    }
    
    jstring result = nullptr;
    HANDLE hData = GetClipboardData(CF_UNICODETEXT);
    if (hData) {
        wchar_t* pszText = static_cast<wchar_t*>(GlobalLock(hData));
        if (pszText) {
            result = env->NewString(reinterpret_cast<const jchar*>(pszText), wcslen(pszText));
            GlobalUnlock(hData);
        }
    }
    
    CloseClipboard();
    return result;
}

JNIEXPORT jboolean JNICALL Java_fastclipboard_FastClipboard_setTextNative(JNIEnv* env, jclass, jstring text) {
    if (!text) return JNI_FALSE;
    
    const jchar* chars = env->GetStringChars(text, nullptr);
    jsize len = env->GetStringLength(text);
    
    if (!OpenClipboard(nullptr)) {
        env->ReleaseStringChars(text, chars);
        return JNI_FALSE;
    }
    
    EmptyClipboard();
    
    // Allocate global memory for the text (including null terminator)
    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, (len + 1) * sizeof(wchar_t));
    if (!hMem) {
        CloseClipboard();
        env->ReleaseStringChars(text, chars);
        return JNI_FALSE;
    }
    
    wchar_t* pMem = static_cast<wchar_t*>(GlobalLock(hMem));
    memcpy(pMem, chars, len * sizeof(wchar_t));
    pMem[len] = L'\0';
    GlobalUnlock(hMem);
    
    SetClipboardData(CF_UNICODETEXT, hMem);
    CloseClipboard();
    
    env->ReleaseStringChars(text, chars);
    return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL Java_fastclipboard_FastClipboard_clearNative(JNIEnv*, jclass) {
    if (!OpenClipboard(nullptr)) return JNI_FALSE;
    EmptyClipboard();
    CloseClipboard();
    return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL Java_fastclipboard_FastClipboard_hasTextNative(JNIEnv*, jclass) {
    if (!OpenClipboard(nullptr)) return JNI_FALSE;
    BOOL hasText = IsClipboardFormatAvailable(CF_UNICODETEXT) || 
                   IsClipboardFormatAvailable(CF_TEXT);
    CloseClipboard();
    return hasText ? JNI_TRUE : JNI_FALSE;
}

} // extern "C"
