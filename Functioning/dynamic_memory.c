#include <stdio.h>
#include <stdlib.h>
#include "dynamic_memory.h"

void dynamicMemoryStats() {
    int n, *arr, i, sum = 0;
    printf("\n-- Dynamic Memory Statistics --\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d, Average = %.2f\n", sum, (float)sum/n);

    free(arr);
}