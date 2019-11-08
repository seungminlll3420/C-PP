#include <iostream>
#include <string>
using namespace std;

class Book{
  char *title;
  int pricel
public:
  Book(const char *title, int price){
    this->title = title;
    this->price = price;
  }
  Book(Book &x){
    title = new char [10];
    for()
  }
  ~Bokk();
  void set(char *title, int price);
  void show() {cout << title << ' ' << price << "circle" << endl;}
};

int main(){
  Book cpp("c++", 10000);
  Book java = cpp;
  java.set("java",12000);
  cpp.show();
  java.show();
}
