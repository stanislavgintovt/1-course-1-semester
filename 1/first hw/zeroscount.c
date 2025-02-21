#include <stdio.h>
#include <stdlib.h>

int CountZeros(int* array, int numsSize){
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (array[i] == 0) {
            count++;
        } 
    }    
    return count;
}

int main(void) {
    int size, max;
    char choose;
    printf("Size of array: ");
    scanf("%i", &size);
    printf("Max number: ");
    scanf("%i", &max);

    int *numbers = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % max;
    } // Initialization of array
    
    printf("Do you want to out array?\nPress y if yes and other if not");
    scanf("\n%c", &choose);
    if (choose == 'Y' || choose == 'y') {
        for (int i = 0; i < size - 1; i++) {
            printf("%i, ", numbers[i]);
        }
        printf("%i\n", numbers[size - 1]);
    }

    printf("Count of zeros is %i\n", CountZeros(numbers, size));
    free(numbers);
    return 0;
}