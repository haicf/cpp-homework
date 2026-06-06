#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;

    while (scanf("%d", &n) == 1) {

        int *A = (int *)malloc(n * sizeof(int));
        int mid1, mid2, cnt = 0, c;
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }
        qsort(A, n, sizeof(int), cmp);

        if (n % 2 == 1) {  
            mid1 = A[n / 2];

            for (int i = 0; i < n; i++) {
                if (A[i] == mid1)
                    cnt++;
            }

            c = 1;  
        }
        else {   
            mid1 = A[n / 2 - 1];
            mid2 = A[n / 2];

            for (int i = 0; i < n; i++) {
                if (A[i] == mid1 || A[i] == mid2)
                    cnt++;
            }

            c = mid2 - mid1 + 1;   
        }

        printf("%d %d %d\n", mid1, cnt, c);

        free(A); 
    }

    return 0;
}
