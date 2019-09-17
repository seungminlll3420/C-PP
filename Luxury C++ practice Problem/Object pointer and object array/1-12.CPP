#include <iostream>
using namespace std;
#include <string>


class Circle{
  int radius;
  string name;
public:
  void setCircle(string name, int radius){
    this->name = name;
    this->radius = radius;
  }
  double getArea(){
    return 3.14*radius*radius;
  }
  string getname(){
    return name;
  }
};

class CircleManager{
  Circle *p;
  int size;
public:
  CircleManager(int size){
    this->size = size;
    p = new Circle [size];
  }
  ~CircleManager(){
    delete p;
  }
  void searchByName();
  void searchByArea();
};

int main(){
  int cl;
  cout << "the number of circles >> ";
  cin >> cl;
  string name;
  int rad;
  CircleManager cir(cl);
  for(int i =0 ; i<cl ;i++){
    cout << "name of circle and radius of circle " << i+1 << " >> ";
    getline(cin, name,' ');
    cin >> rad;
    cir->p[i]->setCircle(name,rad);

  }

}
