#include <iostream>
using namespace std;

int main(){
  float a,b,c,d,e;
  float max;
  cout << "Please enter a number of five >> ";
  cin >> a >> b >> c >> d >> e;
  max = a;
  if(max < b){
    max = b;
  }
  if(max < c){
    max = c;
  }
  if(max < d){
    max = d;
  }
  if(max < e){
    max = e;
  }
  cout << "the greatest number is "<< max;

}
