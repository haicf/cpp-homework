#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
 
    while (getline(cin,a) && getline(cin,b)){
        vector<char>v;
        vector<bool>visitedb(b.length(),false);
    
        for (size_t i = 0; i < a.length(); i++){
            for (size_t j = 0; j < b.length(); j++){
                if (a[i]==b[j] && a[i]!= ' ' && !visitedb[j]){
                    v.push_back(b[j]);
                    visitedb[j] = true;
                    break;
                }
            }
        }
    
        sort(v.begin(),v.end());
        for (size_t i =0; i < v.size(); i++){
            cout << v[i];
        }
    
        cout << endl;
        v.clear();
    }
    
    return 0;
}
        
