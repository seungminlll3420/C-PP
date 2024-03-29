#include <iostream>
using namespace std;

class Point{
  int x,y;
public:
  Point(int x,int y){this->x = x; this->y = y;}
  int getX(){return x;}
  int getY(){return y;}
protected:
  void move (int x, int y){this->x = x; this->y = y;}
};

class ColorPoint : public Point{
  string color;
public:
  ColorPoint(int x = 0,int y = 0, string a = "BLACK") : Point(x,y){
    color =a;
  }

  void setColor(string color){ this->color = color;}
  void setPoint(int x,int y){
    move(x,y);
  }
  void show(){
    cout << "(" << getX() <<", " << getY()<< ")" << color << endl;
  }
};

int main(){
  ColorPoint zeroPoint;
  zeroPoint.show();

  ColorPoint cp(5,5);
  cp.setPoint(10,20);
  cp.setColor("BLUE");
  cp.show();
}
