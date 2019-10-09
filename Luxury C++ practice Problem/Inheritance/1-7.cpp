#include <iostream>
using namespace std;
class BaseMemory{
  char *mem;
protected:
  BaseMemory(int size){ mem = new char [size];}
  void setmemory(int i, char a){
    mem[i] = a;
  }
  char getmemory(int i){
    return mem[i];
  }
};
class ROM : BaseMemory{
public:
  ROM(int i,char x[],int j) : BaseMemory(i){
    for(int k =0; k<j ;k++){
      setmemory(k,x[k]);
    }
  }
  char read(int i){
    return getmemory(i);
  }
};
class RAM : BaseMemory{

public:
  RAM(int i) : BaseMemory(i){}
  void Write(int i, char c){
    setmemory(i,c);
  }
  char read(int i){
    return getmemory(i);
  }
};
int main(){
  char x[5] ={'h','e','l','l','o'};
  ROM biosROM(1024*10,x,5);
  RAM mainMemory(1024*1024);

  for(int i=0;i<5;i++) mainMemory.Write(i,biosROM.read(i));
  for(int i=0;i<5;i++) cout << mainMemory.read(i);
}
