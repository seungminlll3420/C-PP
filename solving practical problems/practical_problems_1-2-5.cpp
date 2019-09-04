#include <iostream>
#include <cstring>
using namespace std;

int main(){

  char a[100];

  cout << "Enter 5 names separated by ';'.";
  int c = 0;
  char b[100];
for(int i = 1; i <= 5 ; i++){
    cin.getline(a,100,';');
    cout << i <<" : "<< a;

    if(c < strlen(a)){
      c = strlen(a);
      strcpy(b,a);
    }
    cout <<"\n";

  }
  cout << "가장 긴 이름은 "<< b;

}
