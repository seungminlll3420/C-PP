#include <iostream>
using namespace std;

#include<stdlib.h>
#include<time.h>


int main(){
  srand(time(0));
  int a = rand() % 5 + 1;
  cout << a;
}
