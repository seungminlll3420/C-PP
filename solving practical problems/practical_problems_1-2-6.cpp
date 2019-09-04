#include <iostream>
using namespace std;

int main(){
  int k, n=0;
  int sum = 0;
  cout << "Please enter an end number. >> ";
  cin >> n;
  for(k=1; k<=n;k++)
    sum += k;
  cout << "What is the sum from 1 to " << n << " = " << sum;
}
