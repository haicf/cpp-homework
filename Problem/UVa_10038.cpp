#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
int main (){
    int n;
    while (cin>>n){
        vector<int>a(n), diff;
        for(int i =0;i<n; i++) cin>>a[i]; 
        if (n == 1) {
            cout << "Jolly\n";
            continue; 
        }
        for (int i =0; i<n-1;i++){
            diff.push_back(abs(a[i]-a[i+1]));
        }
        sort(diff.begin(), diff.end());

        int jolly = true;
        for (int i = 0;i<n-1;i++){
            if (diff[i] != i+1){
                jolly = false;
                break;
            }
        }
        if (jolly) cout<<"Jolly\n";
        else {
            cout<<"Not jolly\n";
        }
    }

    return 0;
}
