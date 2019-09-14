#include <iostream>
#include <cstring>
using namespace std;

int main(){
  cout << "Enter string >> ";
  char a[100];
  cin >> a;
  int j = 0;
  while(strlen(a) != j){
    for(int i = 0; i<=j;i++ ){
      cout << a[i];
    }
    cout << endl;
    j++;
  }
}
