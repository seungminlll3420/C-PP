#include <iostream>
using namespace std;

class circle {
public:
  int radius;
  circle();
  circle(int r);
  double getArea();
};

circle::circle() : circle(1){}

circle::circle(int r){
  radius = r;
  cout << "radius "<< radius << " Create a circle" << endl;
}

double circle::getArea() {
  return 3.14*radius*radius;
}

int main(){
  circle donut;
  double area = donut.getArea();
  cout << "What's the area of the donut? " << area << endl;

  circle pizza(30);
  area = pizza.getArea();
  cout << "What's the area of the pizza? "<< area << endl;
}
