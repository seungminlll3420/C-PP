#include <iostream>
using namespace std;

int main(){
  int a = 5;
  int b = 10;
  int c;
  cout << "a+b/3*3 = " << a+b/3*3 << "\n";
  cout << "b << 2 = " << (b << 2) << "\n";
  cout << "a != b = " << (a != b) << "\n";
  cout << "b % a = " << (b % a) << "\n";
  cout << "(a>b) ? a : b = " << ((a>b)?a:b) << "\n"; // (a>b) -> true output a
  cout << "sizeof(a) = " << sizeof(a) << "\n";
  c = a++;
  cout << "c = a++, c = " << c << "\n";
  a += b;
  cout << "a += b,  a = " << a << "\n";
  cout << "a & b " << (a & b) << "\n";
  c = (a+b,a-b); // a = 16, b = 10
  cout << "c = (a + b, a-b), c = " << c << "\n";
}
