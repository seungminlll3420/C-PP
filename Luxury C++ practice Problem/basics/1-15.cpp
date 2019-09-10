#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char a[10];

  int c;
  int d;

  while(1){
    cout << "? ";
    cin >> c >> a >> d;
    if(!strcmp(a,"+")){
      cout << c <<" "<< a << " " << d << " = " << c+d;
    }else if(!strcmp(a,"-")){
      cout << c <<" "<< a << " " << d << " = " << c-d;
    }else if(!strcmp(a,"*")){
      cout << c <<" "<< a << " " << d << " = " << c*d;
    }else if(!strcmp(a,"/")){
      cout << c <<" "<< a << " " << d << " = " << c/d;
    }else if(!strcmp(a,"%")){
      cout << c <<" "<< a << " " << d << " = " << c%d;
    }else{
        cout << "Input error.";
    }
    cout << "\n";
  }
}
