#include <iostream>
#include <cstring>
using namespace std;

class Integer{
int Int;

public:
  inline Integer(int num){
    Int = num;
  }
  inline Integer(string num){
    Int = stoi(num);
  }
  inline int get(){
    return Int;
  }
  inline void set(int num){
    Int = num;
  }
  inline int isEven(){
    Int =1;
    return Int;
  }
};

int main(){
  Integer n(30);
  cout << n.get()<< ' ';
  n.set(50);
  cout << n.get()<< ' ';

  Integer m("300");
  cout << m.get()<< ' ';
  cout << m.isEven();

}
