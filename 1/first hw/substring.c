#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countOfLies(char* s, char* s1) {
    int count = 0;
    for (int pos = 0; pos < strlen(s) - strlen(s1) + 1; pos++) {
        int pos1 = 0, k = pos;
        while (s[k] == s1[pos1] && pos1 < strlen(s1) && k < strlen(s)) {
            pos1++;
            k++;
        }
        if (pos1 == strlen(s1)) {
            count++;
        }
    }
    return count;
}

int main(void) {
    char *s = (char*)malloc(sizeof(char) * 1000), *s1 = (char*)malloc(sizeof(char) * 100);
    printf("Input string s: ");
    scanf("%s", s);
    printf("Input string s1: ");
    scanf("%s", s1);
    printf("%i", countOfLies(s, s1));
    free(s);
    free(s1);
    return 0;
}