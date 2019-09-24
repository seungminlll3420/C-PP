#include <iostream>
using namespace std;
class Circle{
  int radius;
public:
  Circle(const Circle& c){
    this->radius = c.radius;
  }
  Circle(){
    radius =1;
  }
  Circle(int radius){
    this->radius = radius;
  }
  double getArea(){
    return 3.14*radius*radius;
  }
};

int main(){
  Circle src(30);
  Circle dest(src);

  cout << "OG Area = "<<src.getArea()<< endl;
  cout << "COPY Area = "<<dest.getArea()<< endl;
}
