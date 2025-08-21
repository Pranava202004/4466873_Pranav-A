#include <stdio.h>
#include <string.h>

char* strings_xor(char* s, char* t) {
    static char res[10005];
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == t[i]) {
            res[i] = '0';
        } else {
            res[i] = '1';
        }
    }
    res[strlen(s)] = '\0';
    return res;
}

int main() {
    char s[10005], t[10005];
    scanf("%s", s);
    scanf("%s", t);
    printf("%s", strings_xor(s, t));
    return 0;
}
