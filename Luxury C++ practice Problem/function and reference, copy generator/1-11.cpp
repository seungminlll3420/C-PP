#include <iostream>
#include <cstring>
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
      delete [] title;
    }
  }
  void set(char* title, int price){
    if(title){
      delete [] title;
    }
    int len = strlen(title);
    this->title = new char[len+1];
    strcpy(this->title,title);
    this->price = price;
  }

  void show(){
    cout << title << ' '<< price << "won " << endl;
  }
};
int main(){
  Book cpp("C++",10000);
  Book java = cpp;
  java.set("java",12000);
  cpp.show();
  java.show();
}
