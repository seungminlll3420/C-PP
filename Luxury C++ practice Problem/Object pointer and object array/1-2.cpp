#include <iostream>
using namespace std;

int main(){
  int *p = new int [5];
  float Average = 0;
  cout << "Enter 5 Integer >> ";
  for(int i = 0; i<5 ; i++){
    cin >> p[i];
    Average += p[i];
  }
  Average /= 5;
  cout << "Average "<< Average;
  delete [] p;
}
