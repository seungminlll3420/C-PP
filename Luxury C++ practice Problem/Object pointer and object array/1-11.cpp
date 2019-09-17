#include <iostream>
using namespace std;

class Container{
  int size;
public:
  Container(){
    size = 10;
  }
  void fill(){
    size = 10;
  }
  void consume(){
    size--;
  }
  int getSize(){
    return size;
  }
};

class CoffeevendingMachine{
Container tong[3];
  void fill(){
    for(int i = 0; i<3;i++)
      tong[i].fill();
  }
  void selectEspresso(){
    if((tong[0].getSize() == 0) || (tong[1].getSize() == 0 )){
      cout << "We don't have enough raw materials. "<< endl;
    }else{
      tong[0].consume();
      tong[1].consume();
      cout << "Drink Espresso" <<endl;
    }

  }
  void selectAmericano(){
    if((tong[0].getSize() == 0) || (tong[1].getSize() <= 1 )){
      cout << "We don't have enough raw materials. "<< endl;
    }else{
      tong[0].consume();
      tong[1].consume();
      tong[1].consume();
      cout << "Drink Americano" <<endl;
    }
  }
  void selectSugarCoffee(){
    if((tong[0].getSize() == 0) || (tong[1].getSize() <= 1 ) || (tong[2].getSize() == 0 )){
      cout << "We don't have enough raw materials. "<< endl;
    }else{
      tong[0].consume();
      tong[1].consume();
      tong[1].consume();
      tong[2].consume();
      cout << "Drink SugarCoffee" <<endl;
    }
  }
  void show(){
    cout << "Coffee " << tong[0].getSize() << ", Water " << tong[1].getSize() << ", Sugar " <<tong[2].getSize() << endl;
  }
public:
  void run(){
    int i;
    CoffeevendingMachine coffee;
    cout << "***** Turn on the coffee machine. *****"<< endl;
    while(1){
      cout << "Please press the menu.(1:Espresso, 2:Americano, 3:SugarCoffee, 4:View remaining quantity, 5:Fill, 6: Exit, ) >> ";
      cin >> i;
      switch(i){
        case 1: coffee.selectEspresso(); break;
        case 2: coffee.selectAmericano(); break;
        case 3: coffee.selectSugarCoffee(); break;
        case 4: coffee.show(); break;
        case 5: coffee.fill(); coffee.show(); break;
        case 6: return ;
      }
    }
  }
};

  int main(){
    CoffeevendingMachine coffeeMachine;
    coffeeMachine.run();
   }
