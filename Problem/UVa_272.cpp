#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    char character;
    bool isOpen = true;
    while (cin.get(character)){
        if (character == '"'){
           if (isOpen){
            cout<<"``";
            isOpen = false;
           }
           else{
            cout<<"''";
            isOpen = true;
           }
        }
        else {
            cout << character;
        }
    }

    return 0;
}
