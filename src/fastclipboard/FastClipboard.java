package fastclipboard;

/**
 * FastClipboard - High-Performance Clipboard Operations for Java
 * 
 * Native clipboard access via JNI - bypasses AWT clipboard latency
 */
public class FastClipboard {
    
    static {
        System.loadLibrary("FastClipboard");
    }
    
    // Native methods
    private static native String getTextNative();
    private static native boolean setTextNative(String text);
    private static native boolean clearNative();
    private static native boolean hasTextNative();
    
    /**
     * Get text from clipboard
     */
    public static String getText() {
        return getTextNative();
    }
    
    /**
     * Set text to clipboard
     */
    public static boolean setText(String text) {
        if (text == null) return false;
        return setTextNative(text);
    }
    
    /**
     * Clear clipboard
     */
    public static boolean clear() {
        return clearNative();
    }
    
    /**
     * Check if clipboard has text
     */
    public static boolean hasText() {
        return hasTextNative();
    }
}
