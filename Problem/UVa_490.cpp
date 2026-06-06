#include <stdio.h>
#include <string.h>

int main() {
    char s[1000][1001];
    int n = 0;
    int max = 0;


    while (fgets(s[n], 1001, stdin)) {
        if (s[n][0] == '\n' || s[n][0] == '\r') break;

        int len = strlen(s[n]);
        if (s[n][len - 1] == '\n') {
            s[n][len - 1] = '\0';
            len--;
        }

        if (len > max) max = len;
        n++;
    }


    for (int i = 0; i < max; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (i < strlen(s[j]))
                printf("%c", s[j][i]);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
