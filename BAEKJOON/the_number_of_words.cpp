#include <iostream>
using namespace std;
#include <cstring>

int main(){
  char a;
  cin >> a;

  int i = 0;
  int words = 0;

  while(a[i] != '\0'){
    if(a[i] == ' '){
      words++;
    }
    i++;
  }
  words++;
  cout << words;
}
