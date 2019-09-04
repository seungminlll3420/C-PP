#include <iostream>
using namespace std;

int main(){

  char i[100];

  for(int a = 0; a<=4;a++){
    cin.getline(i,100,';');
    cout << i;
  }
}
