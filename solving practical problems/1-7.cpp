#include <iostream>
using namespace std;

int main(){
  int a;
  while(1){
    cout << "intput number\n";
    cin >> a;
    if(a == 0)
      break;

    if((a % 3) == 0){
        cout << "YES\n";
        continue;
      }else{
        cout << "NO\n";
        continue;
      }
  }

}
