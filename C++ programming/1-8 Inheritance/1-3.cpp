#include <iostream>
#include <"sh"
using namespace std;

class Shape{
public:
  void Paint(){
    draw();
  }
  virtual void draw(){
    cout<< "--Shape--"
  }
};
int main(){
  Shape *pShape = new Shape();
  pShape->Paint();
  delete pShape;
}
