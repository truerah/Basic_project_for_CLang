#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"
#include "guess_game.h"
#include "array_analyzer.h"
#include "file_notepad.h"
#include "dynamic_memory.h"
#include "string_tools.h"

void showMenu() {
    printf("\n===== C LANGUAGE LEARNING HUB =====\n");
    printf("1. Calculator (Operators, Functions)\n");
    printf("2. Guess the Number (Loops, if-else)\n");
    printf("3. Array Analyzer (Arrays, Functions)\n");
    printf("4. File Notepad (File Handling)\n");
    printf("5. Dynamic Stats (Pointers, malloc)\n");
    printf("6. String Reverser (Strings)\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    do {
        showMenu();
        scanf("%d", &choice);
        switch(choice) {
            case 1: calculator(); break;
            case 2: guessGame(); break;
            case 3: arrayAnalyzer(); break;
            case 4: fileNotepad(); break;
            case 5: dynamicMemoryStats(); break;
            case 6: stringReverser(); break;
            case 7: printf("Exiting... Bye!\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while(choice != 7);

    return 0;
}
