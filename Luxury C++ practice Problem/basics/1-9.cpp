#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char a[100];
  char b[100];
  int c;
  cout <<"What's your name? ";
  cin.getline(a,100,'\n');
  cout <<"What's your address? ";
  cin.getline(b,100,'\n');
  cout << "How old are you? ";
  cin >> c;
  cout <<a <<", "<< b << ", "<<c <<"years old";


}
