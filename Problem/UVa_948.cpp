#include <stdio.h>
#define MAX_FIB_COUNT 45
#define MAX_INPUT_VAL 100000000

long long Fib_array[MAX_FIB_COUNT];
int Fib_count = 0;

void build_fib() {
    Fib_array[0] = 1;   
    Fib_array[1] = 2;   
    Fib_count = 2;

    for (int i = 2; i < MAX_FIB_COUNT; i++) {
        long long next = Fib_array[i - 1] + Fib_array[i - 2];
        if (next > MAX_INPUT_VAL) break;
        Fib_array[i] = next;
        Fib_count++;
    }
}

int main() {
    build_fib();

    int T;
    if (scanf("%d", &T) != 1) return 0;

    while (T--) {
        int ori_n;
        if (scanf("%d", &ori_n) != 1) continue;

        int n = ori_n;
        char fib_base[MAX_FIB_COUNT + 1]; 
        int result_idx = 0;

        int start = -1;
        for (int j = Fib_count - 1; j >= 0; j--) {
            if (Fib_array[j] <= n) {
                start = j;
                break;
            }
        }

        if (start == -1) {
            printf("%d = 0 (fib)\n", ori_n);
        } else {
            for (int j = start; j >= 0; j--) {
                if (n >= Fib_array[j]) {
                    fib_base[result_idx++] = '1';
                    n -= Fib_array[j];
                } else {
                    fib_base[result_idx++] = '0';
                }
            }
            fib_base[result_idx] = '\0'; 
            printf("%d = %s (fib)\n", ori_n, fib_base);
        }
    }

    return 0;
}
