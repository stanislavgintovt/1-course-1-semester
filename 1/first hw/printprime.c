#include <stdio.h>

void outPrimes(int max) {
    if (max < 2) {
        return;
    }
    int flag;
    for (int p = 2; p < max; p++) { // Check for all numbers if prime
        flag = 1;
        for (int div = 2; div * div <= p; div++){ // Searching for divisors
            if (p % div == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
           printf("%i ", p);
        }
    }
}

int main(void){
    int a;
    printf("Input the number: ");
    scanf("%i", &a);
    outPrimes(a);

}