#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char N[1010];

	while (1) {
		scanf("%s", N);

		// if there are "0", then stop 
		if (strcmp(N, "0") == 0) {
			break;
		}

		int degree = 0;

		// count the first 9-degree
		int sum = 0;
		for (int i = 0; N[i] != '\0'; i++) {
			sum = sum + N[i] - '0';
		}
		if (sum % 9 != 0) {
			printf("%s is not a multiple of 9.\n", N);
			continue;
		}

		// the first sum is is already 9-degree 
		degree = 1;
		while (sum > 9) {
			int newSum = 0;
			while (sum > 0) {
				newSum += sum % 10;
				sum /= 10;
			}
			sum = newSum;
			degree++;
		}

		printf("%s is a multiple of 9 and has 9-degree %d.\n", N, degree);
	}

	return 0; 
}
