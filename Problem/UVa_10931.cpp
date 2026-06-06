#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    while (cin >> number && number != 0) {
        string binaryString = "";
        int count = 0;

        while (number > 0) {
            int remainder = number % 2; 
            if (remainder == 1) {
                ount++; 
                binaryString = "1" + binaryString; // Append '1' to the front
            } else {
                binaryString = "0" + binaryString; // Append '0' to the front
            }

            number = number / 2; 
        }
        cout << "The parity of " << binaryString << " is " << oneCount << " (mod 2)." << endl;
    }

    return 0;
}
