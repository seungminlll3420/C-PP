#include <iostream>
#include <string>
using namespace std;
class Board{

  static string a[1000];
  static int size=1;
  static int f=0;
public:
  static void add(string b){
    if(size > 1000)
      return;
    a[f] = b;
    size++;
    f++;
  }
  static void print(){
    for(int i =0;i<size;i++){
      cout << a[i];
    }
  }
};
int main(){
  Board::add("I love you");
  Board::add("me too");
  Board::print();
  Board::add("it's dream");
  Board::print();
}
