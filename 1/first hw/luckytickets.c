#include <stdio.h>

int main(void) {
    int a[28] = {0}, ans = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                a[i + j + k]++;
            }
        }
    }
    for (int i = 0; i < 28; i++){
        ans += a[i] * a[i];
    }
    printf("%i", ans);
}