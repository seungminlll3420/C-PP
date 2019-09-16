#include <iostream>
using namespace std;
#include <string>

int main(){
  string str;
  cout << "Please enter one line below. (enter exit if exit) "<<endl;

  while(1){
    getline(cin,str,'\n');
    if(str == "exit"){
      break;
    }

    for(int i = str.size() ; 0 <= i; i--){
      cout << str[i];
    }
    cout << endl;
  }

}
