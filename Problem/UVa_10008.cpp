#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    int n;
    cin >> n;
  
    string dummy;
    getline(cin, dummy);
    int letterCounts[26] = {0};

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line); // Read one full line of text

        for (int j = 0; j < line.length(); j++) {
            char ch = line[j];

            // If the character is an alphabet letter
            if (isalpha(ch)) {
                char upper = toupper(ch);      
                int index = upper - 'A';       // 'A'-'A'=0, 'B'-'A'=1, 'C'-'A'=2...
                letterCounts[index]++;          
            }
        }
    }

    for (int loop = 0; loop < 26; loop++) {
        
        int highestCount = 0;
        int highestIndex = -1;

        for (int k = 0; k < 26; k++) {
            if (letterCounts[k] > highestCount) {
                highestCount = letterCounts[k];
                highestIndex = k;
            }
        }
        if (highestIndex == -1) {
            break;
        }
        char result = 'A' + highestIndex;
        cout << result << " " << highestCount << endl;

        letterCounts[highestIndex] = 0;
    }

    return 0;
}
