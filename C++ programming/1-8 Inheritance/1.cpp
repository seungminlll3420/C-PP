#include <iostream>
using namespace std;
class C{
public:
  C(){ cout << "생성자 C" << endl;}
  ~C() {cout << "소멸자 C" << endl;}
};
class B{ 
public:
  B(){ cout << "생성자 B" << endl;}
  ~B() {cout << "소멸자 B" << endl;}
  C c;
};
class A{
public:
  A(){ cout << "생성자 A" << endl;}
  ~A() {cout << "소멸자 A" << endl;}
  B b;
};


int main(){
  A a;

  return 0;
}
