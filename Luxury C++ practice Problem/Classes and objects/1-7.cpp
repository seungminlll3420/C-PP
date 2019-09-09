#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom{
public:
  int next(){
    while(1){
      int n = rand();
      if((n%2) != 0)
        return n;
    }
  }
  int nextInRange(int num1,int num2){
    while(1){
      int n = rand() % num2 + num1;
      if((n%2) != 0)
        return n;
    }
  }
};
int main(){
  SelectableRandom r;
  srand(time(0));
  cout <<"-- 10 random integers from 0 to "<< RAND_MAX <<" --"<<endl;
  for(int i=0;i<10;i++){
    int n = r.next();
    cout << n << ' ';
  }
  cout << endl<<endl << " -- 10 random integers from 2 to 4 =="<<endl;
  for(int i = 0; i<10; i++){
    int n = r.nextInRange(2,8);
    cout << n << ' ';
  }
}
