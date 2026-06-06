#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    int t;
    while (cin>>t && t != 0){
        int top = 1, n = 2, w = 3, e = 4, s = 5, bottom = 6;
        
        while (t--){
            string direction;
            cin >> direction;
            int temp;
            if (direction == "north"){ 
                temp = top;
                top = s;
                s = bottom;
                bottom = n;
                n = temp;
            } else if (direction == "south") {
                temp = top;
                top = n;
                n = bottom;
                bottom = s;
                s = temp;
            } else if (direction == "west") {
                temp = top;
                top = e;
                e = bottom;
                bottom = w;
                w = temp;
            } else if (direction == "east"){
                temp = top;
                top = w;
                w = bottom;
                bottom = e;
                e = temp;
            }
        }
        cout << top << endl;
    }

    return 0;
}
