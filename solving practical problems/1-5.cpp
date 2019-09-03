#include <iostream>
using namespace std;

int main(){
  int a, b, sum = 0;
  cout << "Enter two integers a and b.\n";
  cin >> a >> b;
  while(a <= b){
    sum += a;
    a++;
  }
  cout << "add from a to b : " << sum;
}
