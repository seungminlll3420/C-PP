#include <iostream>
#include <string>
using namespace std;

class Shape{
protected:
  string name;
  int w ,h;
public:
  Shape(string n = "", int w=0,int h=0){name = n; this->w = w; this->h = h;}
  virtual double getArea(){return 0;}
  string getName() {return name;}
};

class Oval : public Shape{
public:
  Oval(string a, int we, int he) : Shape(a,we,he){
    ;
  }
  virtual double getArea(){return w*h*3.14;} // r =w/2
};
class Rect  : public Shape{
public:
  Rect(string a, int we, int he) : Shape(a,we,he){
    ;
  }
  virtual double getArea(){return w*h;}
};
class Triangular  : public Shape{
public:
  Triangular(string a, int we, int he) : Shape(a,we,he){
    ;
  }
  virtual double getArea(){return w*h/2;}
};

int main(){
  Shape *p[3];
  p[0] = new Oval("Bindae",10,20);
  p[1] = new Rect("CKfWJr",30,40);
  p[2] = new Triangular("tost",30,40);
  for(int i=0; i< 3; i++) cout << p[i]->getName() << " Area " << p[i]->getArea() << endl;
  for(int i=0; i<3;i++) delete p[i];
}
