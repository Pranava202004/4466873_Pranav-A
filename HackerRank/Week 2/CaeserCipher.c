#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char s[], int k) {
    int n = strlen(s);
    k = k % 26;  // normalize rotation
    
    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            char base = islower(s[i]) ? 'a' : 'A';
            s[i] = ( (s[i] - base + k) % 26 ) + base;
        }
    }
    printf("%s\n", s);
}

int main() {
    int n, k;
    scanf("%d", &n);   // length of string
    char s[1001];
    scanf("%s", s);    // input string
    scanf("%d", &k);   // rotation factor
    
    caesarCipher(s, k);
    return 0;
}
