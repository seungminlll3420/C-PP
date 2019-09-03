#include <iostream>
using namespace std;

int adder(int a, int b){
  return a+b;
}

int main(){
  int a, b, sum;
  while(true){

    cout << "Enter two integers a and b.\n";
    cin >> a >> b;
    if((a == 0) && (b == 0))
      break;
    sum = adder(a, b);
    cout << "a + b = " << sum << ".\n";
}
  return 0;
}
