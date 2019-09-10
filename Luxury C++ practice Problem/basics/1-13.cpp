#include <iostream>
using namespace std;

int main(){
  int a;
  int b;
  cout << "***** Welcome to the Qin Shihuang. *****\n";


    while(1){
      cout << "Jjambbong:1, Jajangmyeon:2, Gun Man-du:3, EXIT:4 >> ";
      cin >> a;

      switch (a) {
        case 1: cout << "How many people can this food feed? >>"; cin >> b; cout <<"The food you ordered is " << b <<" servings.\n"; continue;
        case 2: cout << "How many people can this food feed? >>"; cin >> b; cout <<"The food you ordered is " << b <<" servings.\n";continue;
        case 3: cout << "How many people can this food feed? >>"; cin >> b; cout <<"The food you ordered is " << b <<" servings.\n";continue;
        case 4: cout << "EXIT"; break;
        default : cout << "Invalid order.\n";continue;
      }
      break;
  }
}
