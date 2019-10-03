#include <iostream>
using namespace std;
class Circle{
  int size;
public:
  Circle(int a){
    size = a;
  }
  int getsize(){
    return size;
  }
};

void swap(Circle &a,Circle &b){
  Circle temp = a;
  a = b;
  b =temp;
}
int main(){
  Circle a(1);
  Circle b(2);
  swap(a,b);
  cout << a.getsize() << b.getsize();
}
