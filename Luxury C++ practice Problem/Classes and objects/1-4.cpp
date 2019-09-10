#include <iostream>
using namespace std;

class CoffeeMachine{
  int coffee;
  int water;
  int sugar;
public:
  CoffeeMachine(int c,int w,int s){
    coffee = c;
    water = w;
    sugar = s;
  }
  void drinkEspresso(){
    coffee--;
    water--;
  }
  void drinkAmericano(){
    coffee--;
    water -= 2;
  }
  void drinkSugarCoffe(){
    coffee--;
    water -= 2;
    sugar--;

  }
  void fill(){
    coffee = 10;
    water = 10;
    sugar = 10;
  }
  void show(){
    cout <<"coffee machine condition, "<< "coffee:"<< coffee << "  water:"<<water<<"  sugar"<<sugar<<endl;
  }
};
int main(){
  CoffeeMachine java(5,10,3);
  java.drinkEspresso();
  java.show();
  java.drinkAmericano();
  java.show();
  java.drinkSugarCoffe();
  java.show();
  java.fill();
  java.show();


}
