#include <iostream>
#include <string>
using namespace std;

class TV{
  int size;
public:
  TV() {size = 20;}
  TV(int size){this->size = size;}
  int getSize(){return size;}
};
class WideTV : public TV{
  bool vidoIn;
public:
  WideTV(int size, bool videoIn) : TV(size){
    this->videoIn = videoIn;
  }
  bool getVideoIn() { return videoIn;}
};
class SmartTV : public TV{
  
}
