#include <iostream>
using namespace std;

#include<stdlib.h>
#include<time.h>

class BaseIo{
public:
  int mode;
};

class In : virtual public BaseIo{
public:
  int readPos;
};

class Out : virtual public BaseIo{
public:
  int writePos;
};
class InOut : public In, public Out{
public:
  bool safe;
};


int main(){
  InOut a;
  a.mode =5;
  cout<< a.mode;

}
