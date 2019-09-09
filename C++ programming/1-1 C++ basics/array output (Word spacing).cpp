#include <iostream>
using namespace std;

int main(){
  cout << "input your address>>";
  char address[100];
  cin.getline(address, 100, '\n');
  cout << "address is " << address;
}
