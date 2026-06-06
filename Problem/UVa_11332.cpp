#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long long n;

    while (scanf("%lld", &n) && n != 0) {

        while (n >= 10) {
            long long sum = 0;
            
            while (n > 0) {
                sum += n % 10;
                n /= 10;       
            }
      
            n = sum;
        }

        printf("%lld\n", n);
    }

    return 0;
}
