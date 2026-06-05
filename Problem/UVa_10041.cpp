#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int r;
        cin>>r;

        vector<int>s(r);
        for (int i = 0; i < r; i++){
            cin>>s[i];
        }
        sort(s.begin(),s.end());
        int median = s[r/2];

        int totDis =0;
        for (int i = 0; i<r; i++){
            totDis += abs(s[i] - median);
        }
        cout << totDis << endl;
    }

    return 0;
}
