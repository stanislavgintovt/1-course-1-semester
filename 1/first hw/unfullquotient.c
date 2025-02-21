#include <stdio.h>

int signum(int number){
    if (number > 0) {
        return 1;
    }
    else if (number < 0) {
        return -1;
    }
    return 0;
}

int abs(int a){
    return a * signum(a);
}

int unfullQuotient(int divident, int divisor, int *errorCode){
    int sign, part = 0, modulo, ans = 0;

    if (signum(divident) - signum(divisor) == 0) {
        sign = 1;
    }
    else {
        sign = -1;
    }
    if (divisor == 0) {
        *errorCode = 1;
        return 0;
    } // "Exception" for zero divizion

    divident = abs(divident);
    divisor = abs(divisor);

    int poweredDivisor;
    while(divisor <= divident) {
        modulo = divisor;
        poweredDivisor = 1;
        while (modulo * 2 < divident){ 
            modulo *= 2;
            poweredDivisor *= 2;
        }
        ans += poweredDivisor;
        divident -= modulo;
    }
    return ans * sign;
}

int main(void){
    int a, b, error = 0;
    printf("Divident: ");
    scanf("%i", &a);
    printf("Divisor: ");
    scanf("%i", &b);
    int answer = unfullQuotient(a, b, &error);
    if (error) {
        printf("zero division error");
        return 0;
    }
    printf("Quotient is %i", answer);
    return 0;
}