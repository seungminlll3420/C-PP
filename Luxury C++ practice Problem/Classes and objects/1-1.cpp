#include <iostream>
using namespace std;

class Tower{
int Height;
public:
  Tower();
  Tower(int H);
  int getHeight();

};

Tower::Tower() : Tower(1) {}
Tower::Tower(int H){
  Height = H;
}
int Tower :: getHeight(){
    return Height;
  }

int main(){
  Tower myTower;
  Tower seoulTower(100);
  cout << "Height is " << myTower.getHeight() << " meter" << endl;
  cout << "Height is "<< seoulTower.getHeight()<< " meter" << endl;
}
