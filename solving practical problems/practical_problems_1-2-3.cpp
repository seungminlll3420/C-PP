#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char a[100];
  char b[100];

  cout << "Please enter a new password. >> ";
  cin >> a;
  cout << "\n";
  cout << "Please enter your new password again. >> ";
  cin >> b;

    if(!strcmp(a,b)){
        cout << "It's same.";
    }else{
        cout << "It's different.";
  }
}
