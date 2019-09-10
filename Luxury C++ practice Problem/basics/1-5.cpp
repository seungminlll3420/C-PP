#include <iostream>
using namespace std;

int main(){
  char a[100];

  cout << "Enter characters (less than 100)\n";

  cin.getline(a,100,'\n');
  int i = 0;
  int x = 0;

  while(a[i] != '\0'){
   if(a[i] == 'x')
    x++;
   i++;

  }
  cout << "How many x's? " << x;
}
