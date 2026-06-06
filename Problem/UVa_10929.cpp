#include <iostream>
#include <string>

using namespace std;

int main() {
	string n;
	while (cin >> n && n != "0") {
		int odd = 0;
		int even = 0;

		for (int i = 0; i < n.length(); i++) {
			//convert string into the integer number
			int num;
			num = n[i] - '0';

			// to find the position for odd and position of even
			if (i % 2 == 0) {
				even += num;
			}
			else {
				odd += num;
			}
		}

		if (abs(odd - even) % 11 == 0) {
			cout << n << " is a multiple of 11.\n";
		}
		else {
			cout << n << " is not a multiple of 11.\n";
		}
	}

	return 0;
}
