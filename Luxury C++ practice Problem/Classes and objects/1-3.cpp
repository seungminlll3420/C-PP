#include <iostream>
#include <cstring>
using namespace std;

class Account{
public:
  string name;
  int NUM;
  int Money;
  Account(string a,int b,int c);
  string getOwner();
  int inquiry();
  int  withdraw(int x);
  void deposit(int d);
};

Account :: Account(string a,int b, int c){
  name = a;
  NUM = b;
  Money = c;
}
void Account :: deposit(int d){
  Money +=d;
}
string Account ::  getOwner(){
  return name;
}
int Account :: withdraw(int x){
  return Money -= x;
}
int Account :: inquiry(){
  return Money;
}
int main(){
  Account a("kitae",1,5000);
  a.deposit(50000);
  cout << a.getOwner() << "'s Money " << a.inquiry()<< endl;
  int money = a.withdraw(20000);
  cout << a.getOwner()<< "'s Money " << a.inquiry();
}
