#include <stdio.h>

long long countSteps(long long x, long long y) {
    long long n = x + y;
    return (n * (n + 1) / 2) + x;
}

int main() {
    int n, i;
    if (scanf("%d", &n) != 1) return 0;

    for (i = 1; i <= n; i++) {
        long long x1, y1, x2, y2;
        scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);

        long long pos1 = countSteps(x1, y1);
        long long pos2 = countSteps(x2, y2);

        printf("Case %d: %lld\n", i, pos2 - pos1);
    }
    return 0;
