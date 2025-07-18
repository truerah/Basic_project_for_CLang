#include <stdio.h>
#include "array_analyzer.h"

void arrayAnalyzer() {
    int n, i, arr[100];
    int sum = 0, max, min;
    printf("\n-- Array Analyzer --\n");
    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    max = min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Sum = %d, Average = %.2f\n", sum, (float)sum/n);
    printf("Max = %d, Min = %d\n", max, min);
}