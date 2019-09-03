#include <iostream>
using namespace std;

int main(){
 int score;

 cout << "Please enter your score! \n";
 cin >> score;
  if(score >= 90)
    cout << "your grade is A.";
  else if(score >= 80)
    cout << "your grade is B.";
  else if(score >= 70)
    cout << "your grade is C.";
  else if (score >= 60)
    cout << "your score is D.";
  else if(score >= 0)
    cout << "your grade is F.";
  else
    cout << "Input error.";
}
