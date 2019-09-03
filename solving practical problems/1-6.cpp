#include <iostream>
using namespace std;

int main(){
  int a, b, sum = 0;
  cout << "Enter two integers a and b.\n";
  cin >> a >> b;

  do{
    sum += a;
    a++;
  }while(a <= b);

  cout << "add from a to b : " << sum;
}
