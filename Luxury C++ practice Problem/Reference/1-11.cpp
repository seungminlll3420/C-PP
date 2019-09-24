#include <iostream>
#include <string>
using namespace std;

class Book{
  char *title;
  int price;
public:
  Book(const char* title, int price){
    strcpy(this->title,title);

    this->price = price;
  }
  ~Book(){
    if(title){
      delete title;
    }
  }
  void set(char* title, int price){
    if(title){
      delete title;
    }
    title = new char;
    this->price = price;
    strcpy(title,title);
  }
  void show(){
    cout << title << ' '<< price << "wan " << endl;
  }
};
int main(){
  Book cpp("C++",10000);
  Book java = cpp;
  java.set("java",12000);
  cpp.show();
  java.show();
}
