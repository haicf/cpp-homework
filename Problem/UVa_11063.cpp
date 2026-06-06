#include <iostream>
using namespace std;

int main() {
    int n;
    int caseNumber = 1;

    while (cin >> n) {
        int b[105];
        bool isB2 = true;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            
            if (b[i] < 1) {
                isB2 = false;
            }
            if (i > 0 && b[i] <= b[i - 1]) {
                isB2 = false;
            }
        }

        if (isB2) {
            int visited[20005] = {0}; 

            for (int i = 0; i < n; i++) {
                for (int j = i; j < n; j++) {
                    int total = b[i] + b[j];

                    if (visited[total] == 1) {
                        isB2 = false;
                        break;
                    }
                    
                    visited[total] = 1;
                }
                if (!isB2) break;
            }
        }

        cout << "Case #" << caseNumber++ << ": ";
        if (isB2) {
            cout << "It is a B2-Sequence.\n\n";
        } else {
            cout << "It is not a B2-Sequence.\n\n";
        }
    }

    return 0;
}
