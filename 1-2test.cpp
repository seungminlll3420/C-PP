#include <iostream>
#include <cstring>
using namespace std;

class Date{
public:
  int Year;
  int Month;
  int Day;
  char e[100];

  Date(int a,int b,int c);
  Date(char d[100]);

  void show();
  int getYear();
  int getMonth();
  int getDAy();
};

Date :: Date(int a,int b, int c){
  Year = a;
  Month = b;
  Day= c;
}
Date :: Date(char d[100]){
  strcpy(e,d);
}
void Date :: show(){
  cout
}


int main(){
  Date birth(2014, 3, 20);
  Date independenceDay("1945/8/15");
  independenceDay.show();
  cout << birth.getYear() << ','<< birth.getMonth() << ',' << birth.getDay();
}
