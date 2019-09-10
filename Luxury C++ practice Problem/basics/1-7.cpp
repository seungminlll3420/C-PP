#include <iostream>
#include <cstring>
using namespace std;

int main(){

  char a[100];

  while(1){
    cout << "Enter yes if you want to exit. >> ";
    cin.getline(a, 100,'\n');

    if(!strcmp(a,"yes")){
      cout << "Exit.";
      break;
    }

  }
}
