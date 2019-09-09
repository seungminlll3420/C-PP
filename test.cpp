#include <iostream>
using namespace std;

class Rectangle {
public:
  int w;
  int h;
  int getArea();
};

int Rectangle :: getArea(){
  return w*h;
}

int main(){
  Rectangle rect;
  rect.w = 3;
  rect.h= 5;
  cout << rect.getArea;


}
