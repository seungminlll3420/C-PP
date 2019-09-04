#include <iostream>
using namespace std;

int sum(int a, int b){
  int k, res =0;
  for(k=a; k<=b; k++){
    res += k;
  }
  return res;
}

int main(){
  int n=0;
  cout << "Please enter an end number. >> ";
  cin >> n;
  cout << "What is the sum from 1 to " << n << " = " << sum(1, n);
}
