#include <iostream>
using namespace std;

class MyInStack{
  int *p;
  int size;
  int tos;
public:
  MyInStack(){
    size = 10;
    tos=0;
    p = new int[size];

  }
  MyInStack(int size){
    p = new int[size];
    this->size = size;
    tos = 0;
  }
  MyInStack(const MyInStack& s){
    this->size = s.size;
    this->tos = s.tos;
    p = new int[size];
    for(int i =0 ; i<size;i++)
      p[i] = s.p[i];

  }
  ~MyInStack(){
    if(p){
      delete [] p;
    }
  }
  bool push(int n){
    if(tos == size){
      return false;
    }else{
      p[tos] = n;
      tos++;
      return true;
    }
  }
  bool pop(int &n){
    if(tos == 0){
      return false;
    }else{
      n = p[tos-1];
      tos--;
      return true;
    }
  }
};

int main(){
  MyInStack a(10);
  a.push(10);
  a.push(20);
  MyInStack b = a;
  b.push(30);

  int n;
  a.pop(n);
  cout << " Stack a pop : " << n <<endl;
  b.pop(n);
  cout << " Stack b pop : " << n <<endl;
}
