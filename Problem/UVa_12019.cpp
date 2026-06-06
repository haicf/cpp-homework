#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Day names, starting from Saturday since January 1st, 2011 was a Saturday
    string dayName[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    int M, D;
    while (T--) {
        cin >> M >> D;

        int total = 0;
        for (int i = 1; i < M; i++) {
            total += daysInMonth[i];
        }
        total += (D - 1); 

        int indeksHari = total % 7;

        cout << dayName[indeksHari] << endl;
    }

    return 0;
}
