#include <iostream>
using namespace std;

class AbstractStank{
public:
  virtual bool push(int n) =0;
  virtual bool pop(int n) =0;
  virtual int size() =0;
};

class Stack : public AbstractStank{
int size;
int i;
int *p;
public:
  stack(int n){
    size = n;
    i = 0
    p = new int [size];
  }
  virtual bool push(int n){
    if(i < size)  p[i++] = n;
    else return false;
    return true;
  }
  virtual bool pop(int &n){
    if(i != -1) n = p[--i];
    else return false;
    return true;
  }
  virtual int size(){
    return size;
  }
  void print(){
    for(int i =0; i<size;i++)
      cout << p[i] << ", ";
  }
}

int main(){
  stack s(10);
  s.push(5);
  s.push(3);
  s.print();
  int x;
  s.pop(x);
  s.print();
}
