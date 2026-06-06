#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main (){
    string keyboard = {"`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"};
    char c;

    while (cin.get(c)){
        char to_lower = tolower(c);
        int pos = keyboard.find(to_lower);
        if (pos != -1){
            cout<<keyboard[pos-2];
        } else {
            cout<<c;
        }
    }
    return 0;
}
