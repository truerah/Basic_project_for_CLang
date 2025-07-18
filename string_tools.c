#include <stdio.h>
#include <string.h>
#include "string_tools.h"

void stringReverser() {
    char str[100];
    printf("\n-- String Reverser --\n");
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    printf("Reversed: ");
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}
