#include <stdio.h>

void Swap(int *a, int *b){
    a[0] += b[0];
    b[0] = a[0] - b[0];
    a[0] -= b[0];
}

void flipArray(int* array, int n) {
    for (int i = 0; i < n / 2; i++) {
        Swap(&array[i], &array[n - i - 1]);
    }
}

void turnOverArray(int* array, int m, int n) {
    flipArray(array, m);
    flipArray(array + m, n);
    flipArray(array, n + m);
}

void printArray(int *array, int numsSize){
    for (int i = 0; i < numsSize - 1; i++) printf("%i, ", array[i]);
    printf("%i\n", array[numsSize - 1]);
}

int main(void) {
    int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    printArray(a, 20);
    turnOverArray(a, 13, 7);
    printArray(a, 20);
}