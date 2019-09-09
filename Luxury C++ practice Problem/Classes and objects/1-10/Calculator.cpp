#include <iostream>
using namespace std;
#include "calculate.h"
void Add::setValue(int x,int y){
  a = x;
  b = y;
}
int Add :: calculate(){
  return a+b;
}
void Sub::setValue(int x,int y){
  a = x;
  b = y;
}
int Sub :: calculate(){
  return a-b;
}
void Mul::setValue(int x,int y){
  a = x;
  b = y;
}
int Mul :: calculate(){
  return a*b;
}
void Div::setValue(int x,int y){
  a = x;
  b = y;
}
int Div :: calculate(){
  return a/b;
}
int main(){
  int num1,num2;
  char Op[10];
  while(1){

    cout << "Emter Two Intigers and Operator (Enter 0,0,! to exit the program.)>>";
    cin >> num1>>num2>>Op;

    if(!strcmp(Op,"+")){
      Add add;
      add.setValue(num1,num2);
      cout << add.calculate();

    }else if(!strcmp(Op,"-")){
      Sub sub;
      sub.setValue(num1,num2);
      cout << sub.calculate();

    }else if(!strcmp(Op,"*")){
      Mul mul;
      mul.setValue(num1,num2);
      cout << mul.calculate();

    }else if(!strcmp(Op,"/")){
      Div div;
      div.setValue(num1,num2);
      cout << div.calculate();

    }else if(!strcmp(Op,"!")){
      break;
    }else{
      cout << "Enter Error";
    }
    cout << "\n";
  }
}
