#include <iostream>
using namespace std;

class Book{
  string title;
  int price, pages;
public:
  Book(string title="",int price=0, int pages=0){
    this->title = title;
    this->price = price;
    this->pages = pages;
  }
  void show(){
  cout << title << ' ' << price << "won" << pages << " pages" << endl;
  }
  string getTitle(){
    return title;
  }
  friend void operator += (Book &a, int op2);
  friend void operator -= (Book &a, int op2);
  // void operator += (int op2){
  //   price += op2;
  // }
  // void operator -= (int op2){
  //   price -= op2;
  // }

};
void operator += (Book &a,int op2){
  a.price += op2;
}
void operator -= (Book &a ,int op2){
  a.price -= op2;
}
int main(){
  Book a("Youth",20000, 300), b("Future",30000,500);
  a += 500;
  b -= 500;
  a.show();
  b.show();
}
