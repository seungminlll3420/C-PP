#include <iostream>
using namespace std;

class MyInStack{
  int p[10];
  int tos;
public:
  MyInStack(){
    tos = 0;
  }
  bool push(int n){
    if(tos == 10){
      return false;
    }else{
      p[tos] = n;
      tos++;
      return true;
    }
  }
  bool pop(int &n){
    if(tos == 0){
      return false;
    }else{
      n = p[tos-1];
      tos--;
      return true;
    }
  }
};

int main(){
  MyInStack a;
  for (int i=0;i<11;i++){
    if(a.push(i))
      cout << i << ' ';
    else
      cout << endl << "number " << i+1 << " stack full"<< endl;
  }
  int n;
  for(int i = 0; i<11;i++){
    if(a.pop(n))
      cout << n << ' ';
    else
      cout << endl << "number " << i+1 << " stack empty";
  }
  cout << endl;
}
