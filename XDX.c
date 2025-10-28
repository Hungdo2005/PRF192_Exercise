#include <stdio.h>
#include <string.h>

int main() {
    char c[999999];
    fgets(c, 999999, stdin);
    c[strlen(c) - 1] = '\0';
    int len = strlen(c);
    int kt = 1;
    for (int i = 0; i < len / 2; i++) {
        if (c[i] != c[len - i - 1]) {
            kt = 0;
            break;
        }
    }
    if (kt == 1){
        printf("YES");
    }else{
        printf("NO");
	}
    return 0;
}
