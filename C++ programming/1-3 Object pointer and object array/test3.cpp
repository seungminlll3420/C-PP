#include <iostream>
using namespace std;
#include <string>


int main(){
  string name [5];
  for(int i=0 ;i<5;i++){
    cout << "name >>";
    getline(cin,name[i],'\n');
  }
  string latter = name[0];
  for (int i=1; i<5; i++){
    if(latter <name[i] ){
      latter = name[i];
    }
  }
  cout << latter <<endl;
}
