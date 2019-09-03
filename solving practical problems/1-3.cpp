#include <iostream>
using namespace std;

int main(){
  int score, div;
  div = 10;
  cout << "Please enter your score! \n";
  cin >> score;
  if(score > 100 || score < 0){
    cout << "Input error.";
    return 0;
  }
  div = score / div;
  switch(div){
    case 10:
    case 9: cout << "your grade is A."; return 0;
    case 8: cout << "your grade is B."; return 0;
    case 7: cout << "your grade is C."; return 0;
    case 6: cout << "your grade is D."; return 0;
    default : cout << "your grade is F."; return 0;
  }
}
