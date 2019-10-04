#include <iostream>
using namespace std;

class Circle{
  int radius;
public:
  Circle(int radius =0){
    this->radius = radius;
  }
  void show(){cout << "radius = " << radius << " Circle" << endl;}
  void operator ++(){
    radius++;
  }
  friend Circle operator ++(Circle &a,int x);
};
Circle operator ++(Circle &a,int x){
  Circle d =a;
  a.radius++;
  return d;
}
int main(){
  Circle a(5), b(4);
  ++a;
  b = a++;
  a.show();
  b.show();
}
