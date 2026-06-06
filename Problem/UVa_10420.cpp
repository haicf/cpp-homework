#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    map<string, int> conquestCount;
    string country, restOfName;

    for (int i = 0; i < n; i++) {
        cin >> country;
        getline(cin, restOfName);

        conquestCount[country]++;
    }

    for (auto const& [name, count] : conquestCount) {
        cout << name << " " << count << endl;
    }

    return 0;
}
