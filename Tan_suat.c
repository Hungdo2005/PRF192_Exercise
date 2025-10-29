#include <stdio.h>
#include <string.h>

int main() {
    char s[100005];
    int tanso[256] = {0};
    int xuathien[256] = {0};
    fgets(s, 100005, stdin);
    s[strlen(s) - 1] = '\0';
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        tanso[(unsigned char)s[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (tanso[i] > 0)
            printf("%c %d\n", i, tanso[i]);
    }
    printf("\n");
    for (int i = 0; i < len; i++) {
        unsigned char c = s[i];
        if (!xuathien[c]) {
            printf("%c %d\n", c, tanso[c]);
            xuathien[c] = 1;
        }
    }
    return 0;
}
