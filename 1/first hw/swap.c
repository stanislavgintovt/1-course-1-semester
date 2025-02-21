#include <stdio.h>

void Swap(int *a, int *b){
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

int main(void){
    int a = 2, b = 5;
    printf("a = %i\n", a);
    printf("b = %i\n", b);
    Swap(&a, &b);
    printf("Swapped:\na =  %i\nb = %i\n", a, b);
    return 0;
}