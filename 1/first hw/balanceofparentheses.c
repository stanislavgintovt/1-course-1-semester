#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isParenthesesBalansed(char* s) {
    int ans = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(') {
            ans++;
        }
        else if (s[i] == ')') {
            ans--;
        }
        if (ans < 0) {
            return false;
        }
    }
    if (ans != 0) {
        return false;
    }
    return true;
}

int main(void) {
    char* s;
    scanf("%s", s);
    printf((isParenthesesBalansed(s) == true) ? "true" : "false");
    return 0;
}


