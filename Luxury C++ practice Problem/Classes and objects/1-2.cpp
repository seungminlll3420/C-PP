
 #include <iostream>
 #include <cstring>
 using namespace std;

 class Date{
 public:
   char date[100];
    int Year;
    int Month;
    int Day;
    Date(int a,int b,int c);
    Date(char a[100]);
    int getYear(){}
    int getMonth(){}
    int getDay(){}
    void show(){}
  };

 Date::Date(int a,int b, int c){
  Year = a;
  Month = b;
  Day = c;
 }

Date::Date(char a[100]){
  strcpy(date, a);
}
void Date ::show(){

  cout << stoi(strDate.Left(4)) << "getYear " << stoi(strDate.Mid(5, 2)) << "Morth " << stoi(strDate.Riht(2))) << "Day" <<endl;
}

int Date:: getYear(){
  return Year;
}
int Date:: getMonth(){
  return Month;
}
int Date:: getDay(){
  return Day;
}

int main(){
  Date birth(2014,3,20);
  Date independenceDay("1945/8/15");
  independenceDay.show();
  cout <<birth.getYear()<<',' << birth.getMonth() << ','<< birth.getDay() <<endl;
}
