#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int n = 1; n <= t; n++) {
		int a, b;
		cin >> a >> b;
		int sum = 0;
		for (int i = a; i <= b; i++) {
			if (i % 2 == 1) {
				sum += i;
			}
		}
		cout << "Case " << n << ": " << sum << endl;
	}

	return 0;
}
