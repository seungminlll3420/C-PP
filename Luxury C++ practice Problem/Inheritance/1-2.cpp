#include <iostream>
#include <string>
using namespace std;

class Circle{
  int radius;
public:
  Circle(int radius = 0){ this->radius = radius; }
  int getRadius() {return radius;}
  void setRadius(int radius){ this->radius = radius;}
  double getArea(){return 3.14*radius*radius;}
};

class NamedCircle : public Circle{
  string name;
public:
  string getname() {return name;}
  void setname(string name){ this->name = name;}
  NamedCircle(int i =0, string a =""){
    setRadius(i);
    name = a;
  }
};
int main(){
  string a;
  int j;
  NamedCircle pizza[5];
  cout << "plz Enter 5 radius and pizza name"<<endl;
  for(int i = 0; i<5;i++){
    cout << i+1 << ">>";
    cin >> j >> a;
    pizza[i].setRadius(j);
    pizza[i].setname(a);
  }
  int k=0;
  int max = pizza[0].getRadius();
  for(int i = 0; i<5;i++){
    if(pizza[i].getRadius() > max){
      max = pizza[i].getRadius();
      k =i;
    }
  }
  cout << pizza[k].getname();
}
