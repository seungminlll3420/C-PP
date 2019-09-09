#include <iostream>
#include <cstring>
using namespace std;

class Date{
public:
  int Year;
  int Month;
  int Day;
  string e;


  Date(int y,int m,int d){Year = y; Month = m; Day= d;};
  Date(char *d);

  string show(){ cout << Year << " Year "<<Month<<" Month "<<Day<<" Day"<<endl;};
  int getYear(){return Year;};
  int getMonth(){return Month;};
  int getDay(){return Day;};
};


Date :: Date(char *d){
  char a[20];
  for(int i =0; i< strlen(d); i++){
    a[i] = *(d+i);
  }
  Year = atoi(strtok(a, "/"));
  Month = atoi(strtok(NULL, "/"));
  Day = atoi(strtok(NULL, ""));
}


int main(){
  Date birth(2014, 3, 20);
  Date independenceDay("1945/8/15");
  independenceDay.show();
  cout << birth.getYear() << ','<< birth.getMonth() << ',' << birth.getDay();
}
