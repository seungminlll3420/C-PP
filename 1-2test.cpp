#include <iostream>
#include <cstring>
using namespace std;

class Date{
public:
  int Year;
  int Month;
  int Day;
  string e;

  Date(int a,int b,int c);
  Date(char d[100]);

  string show();
  int getYear();
  int getMonth();
  int getDAy();
};

Date :: Date(int a,int b, int c){
  Year = a;
  Month = b;
  Day= c;
}
Date :: Date(string d){
  e = d;
}
string Date :: show(){
  string Y ="Year";
  string M = "Month";
  string D = "Day";

  return stoi(strDate.Left(4)) +Y;

}


int main(){
  Date birth(2014, 3, 20);
  Date independenceDay("1945/8/15");
  independenceDay.show();
  cout << birth.getYear() << ','<< birth.getMonth() << ',' << birth.getDay();
}
