#include <iostream>
using namespace std;

int main (){
  int a,b;
  while (cin>>a>>b){
    if (a == 0 && b == 0) break;
    int count = 0;
    for (int i = a; i*i <= b; i++){
      int square = i*i;

      if (square >= a && square <= b)
        count++;
    }
    cout<<count<<endl;
  }
return 0;
}
