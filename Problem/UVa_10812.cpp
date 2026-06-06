#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);   

    while (n--) {
        int s, d;
        scanf("%d %d", &s, &d);

     
        if (s < d || (s + d) % 2 != 0) {
            printf("impossible\n");
        } else {
            int A = (s + d) / 2;
            int B = (s - d) / 2;

       
            if (A < 0 || B < 0) {
                printf("impossible\n");
            } else {
                printf("%d %d\n", A, B);
            }
        }
    }

    return 0;
}
