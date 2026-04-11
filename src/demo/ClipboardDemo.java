package demo;

import fastclipboard.FastClipboard;

import java.util.Scanner;

/**
 * Demo: FastClipboard operations
 */
public class ClipboardDemo {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("========================================");
        System.out.println("FastClipboard Demo");
        System.out.println("========================================\n");
        
        // Check if clipboard has text
        boolean hasText = FastClipboard.hasText();
        System.out.println("Clipboard has text: " + hasText);
        
        if (hasText) {
            String current = FastClipboard.getText();
            System.out.println("Current clipboard text (first 100 chars):");
            System.out.println(current.length() > 100 ? current.substring(0, 100) + "..." : current);
            System.out.println();
        }
        
        // Set new text
        System.out.println("Enter text to copy to clipboard (or 'quit' to exit):");
        String input = scanner.nextLine();
        
        if (input.equalsIgnoreCase("quit")) {
            System.out.println("Exiting...");
            return;
        }
        
        boolean success = FastClipboard.setText(input);
        if (success) {
            System.out.println("✓ Text copied to clipboard successfully!");
            
            // Verify
            String verify = FastClipboard.getText();
            if (verify != null && verify.equals(input)) {
                System.out.println("✓ Verification: Text matches!");
            }
        } else {
            System.out.println("✗ Failed to copy text to clipboard");
        }
        
        // Clear option
        System.out.println("\nClear clipboard? (y/n):");
        String clear = scanner.nextLine();
        if (clear.equalsIgnoreCase("y")) {
            FastClipboard.clear();
            System.out.println("✓ Clipboard cleared");
        }
        
        System.out.println("\nDone!");
    }
}
