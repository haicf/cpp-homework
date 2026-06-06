#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

void solve() {
    map<string, int> treeCount;
    string species;
    int total = 0;

    while (getline(cin, species) && !species.empty()) {
        treeCount[species]++;
        total++;
    }
    for (map<string, int>::iterator it = treeCount.begin(); it != treeCount.end(); ++it) {
        double percentage = (double)it->second * 100.0 / total;
        cout << it->first << " " << fixed << setprecision(4) << percentage << endl;
    }
}

int main() {
    int n;
    string line;

    if (!(cin >> n)) return 0;

    getline(cin, line); 
    // Melompati baris kosong pertama sebelum test case dimulai
    getline(cin, line); 

    for (int i = 0; i < n; i++) {
        solve();
 
        if (i < n - 1) {
            cout << endl;
        }
    }

    return 0;
}
