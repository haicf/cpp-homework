#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long convert(string s){
    long long result = 0;
    for (int i = 0; i < s.length(); i++){
        result =  result * 2 + (s[i]-'0');
    }
    return result;
}

long long find(long long a, long long b){
    while ( b != 0){
    long long remain = a % b;
        a = b;
        b = remain;
    }
    return a;
}

int main (){
    int n;
    cin>> n;

    for (int i = 1; i< n; i++){
        string s1, s2;
        cin>>s1>>s2;

        long long num1 = convert(s1);
        long long num2 = convert(s2);
        long long gcd = find(num1, num2);

        cout << "Pair #" << i << ": ";
		if (gcd > 1) {
		    cout << "All you need is love!" << endl;
	    }	
	    else {
		    cout << "Love is not all you need!" << endl;
	    }
	}
    return 0;
}
