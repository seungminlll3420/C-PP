#include <iostream>
using namespace std;
// << 함수 내 구현 하는 방법
class Statistics{
  int A[100];
  int i=0;
public:
  bool operator ! (){
    if(i == 0) return true;
    else return false;
  }
  Statistics& operator << (int x){
    A[i++] =x;
    return *this;
  }
  void operator >>(int &x){
    int sum =0;
    for(int j =0;j<i;j++){
      sum += A[j];
    }
    x = sum/i;
  }
  void operator ~(){
    for(int j =0;j<i;j++){
      cout << A[j] << ' ';
    }
    cout <<endl;
  }
};

int main(){
  Statistics stat;
  if(!stat) cout << "No statistics data currently available."<<endl;

  int x[5];
  cout << "Enter 5 Integer >>";
  for(int i= 0;i<5;i++) cin >> x[i];

  for(int i=0;i<5;i++) stat << x[i];
  stat << 100 << 200;
  ~stat;
  int avg;
  stat >> avg;
  cout << "avg = " << avg <<endl;
}
