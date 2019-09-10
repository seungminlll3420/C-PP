#include <iostream>
#include <cstring>
using namespace std;

int main(){
  int y;
  char a[10];
  char b[10];
  char c[10];
  char d[10];
  strcpy(a, "E");
  strcpy(b, "A");
  strcpy(c, "C");
  int i;
  cout << "It's 2,000 won for Espresso, 2300 won for Americano and 2500 won for cappuccino.\n";
  for(i = 0; i < 20000 ; ){
    cout << "order >> ";

    // cin.getline(d,10,' ');
    // cin >> y;
    cin >> d >> y;

    if(!strcmp(a,d)){
      i = i + y *2000;
      cout << "It's "<< y *2000 <<" won. Enjoy your meal.\n";
    }else if(!strcmp(b,d)){
      i = i + y *2300;
      cout << "It's "<< y *2300 <<" won. Enjoy your meal.\n";
    }else if(!strcmp(c,d)){
      i = i + y *2500;
      cout << "It's "<< y *2500 <<" won. Enjoy your meal.\n";
    }else{
      cout << "The order was wrong.\n";
    }

  }

  cout << "To close the cafe selling at " << i << " won today. See you tomorrow!";


}
