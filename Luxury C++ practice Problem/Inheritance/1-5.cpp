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

class MyQueue : BaseArray{
  int index;
  int x;
public:
  MyQueue(int i) : BaseArray(i){
    index=0;
    x=0;
  }
  void enqueue(int i){
    if(index == getcapacity() - 1){
      return ;
    }
    put (index++,i);
  }
  int length(){
    return index - x;
  }
  int dequeue(){
    if(length() == 0){
      return 0;
    }
    return get(x++);
  }
  int capacity(){
    return getcapacity();
  }
};
int main(){
  MyQueue mQ(100);
  int n;
  cout << "Enter 5 Integer >>";
  for(int i =0;i<5;i++){
    cin >> n;
    mQ.enqueue(n);
  }
  cout << " Queue area : " << mQ.capacity() << ", Queue size : " << mQ.length() <<endl;
  cout << " Queufkldgldsgl : ";
  while(mQ.length() != 0){
    cout << mQ.dequeue() << ' ';
  }
  cout << endl << "Queue size " << mQ.length() << endl;
}
