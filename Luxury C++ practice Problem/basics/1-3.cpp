#include <iostream>
using namespace std;

int main(){
  int a,b;
  cout <<  "Enter two integers >> ";
  cin >> a >> b;
  if(a >= b)
    cout << "Great number is " << a;
  else
    cout << "Great number is " << b;
}
