#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include "file_notepad.h"

void fileNotepad() {
    FILE *fp;
    char filename[100], text[1000];
    int choice;

    printf("\n-- File Notepad --\n");
    printf("Enter filename: ");
    scanf("%s", filename);

    printf("1. Write to file\n2. Read from file\nEnter choice: ");
    scanf("%d", &choice);
    getchar(); // consume newline

    if(choice == 1) {
        printf("Enter text (end with #): ");
        fp = fopen(filename, "w");
        char ch;
        while((ch = getchar()) != '#') {
            fputc(ch, fp);
        }
        fclose(fp);
        printf("Text written to %s\n", filename);
    } else if(choice == 2) {
        fp = fopen(filename, "r");
        if(fp == NULL) {
            printf("File not found!\n");
            return;
        }
        printf("\nFile contents:\n");
        while(fgets(text, sizeof(text), fp)) {
            printf("%s", text);
        }
        fclose(fp);
    } else {
        printf("Invalid choice!\n");
    }
}
