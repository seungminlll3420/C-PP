#include <iostream>
using namespace std;

int main(){
  char a[100];

  cout << "문자를 입력하라(100개 미만).\n";

  cin.getline(a,100,'\n');
  int i = 0;
  int x = 0;

  while(a[i] != '\0'){
   if(a[i] == 'x')
    x++;
   i++;

  }
  cout << "X의 개수는 " << x;
}
