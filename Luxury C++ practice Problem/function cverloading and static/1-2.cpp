#include <iostream>
using namespace std;
#include <string>

class person{
  int id;
  double weight;
  string name;
public:
  person(){
    id =1;
    name = "grace";
    weight = 20.5;
  }
  person(int a,string b){
    id = a;
    name = b;
    weight = 20.5;
  }
  person(int a,string b, double c){
    id= a;
    name = b;
    weight =c;
  }
  void show(){
    cout << id << ' ' << weight << ' ' << name << endl;
  }
};
int main(){
  person grace, ashley(2,"Ashley"), helen(3,"Helen",32.5);
  grace.show();
  ashley.show();
  helen.show();
}
