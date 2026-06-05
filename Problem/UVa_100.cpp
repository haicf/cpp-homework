#include <iostream>
#include <algorithm>

using namespace std;

long long cyclelength(long long n) {
	long long count = 1;
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = 3 * n + 1;
		}
		count++;
	}
	return count;
}

int main() {
	long long i, j;
	while (cin >> i >> j) {
		long long a = min(i, j);
		long long b = max(i, j);

		long long maxLen = 0;
		for (long long n = a; n <= b; n++) {
			maxLen = max(maxLen, cyclelength(n));
		}
		cout << i << " " << j << " " << maxLen << endl;
	}

	return 0;
}
