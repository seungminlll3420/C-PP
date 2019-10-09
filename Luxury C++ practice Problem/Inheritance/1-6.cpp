#include <iostream>
using namespace std;

class BaseArray{
private:
  int capacity;
  int *mem;
protected:
  BaseArray(int capacity = 100){
    this->capacity = capacity;
    mem = new int [capacity];
  }
  ~BaseArray(){delete [] mem; }
  void put(int index, int val){mem[index] = val;}
  int get(int index){ return mem[index];}
  int getcapacity(){return capacity;}

};

class MyStack : BaseArray{
  int index;

public:
  MyStack(int i) : BaseArray(i){
    index=-1;
  
  }
  void push(int i){
    if(index == getcapacity() - 1){
      return ;
    }
    put(++index,i);
  }
  int length(){
    return index +1;
  }
  int pop(){
    if(index == -1){
      return 0;
    }
    return get(index--);
  }
  int capacity(){
    return getcapacity();
  }
};

int main(){
  MyStack mStack(100);
  int n;
  cout << "Enter 5 Integer >>";
  for(int i =0;i<5;i++){
    cin >> n;
    mStack.push(n);
  }
  cout << " mStack area : " << mStack.capacity() << ", mStack size : " << mStack.length() <<endl;
  cout << " mStackfkldgldsgl : ";
  while(mStack.length() != 0){
    cout << mStack.pop() << ' ';
  }
  cout << endl << "mStack size " << mStack.length() << endl;
}
