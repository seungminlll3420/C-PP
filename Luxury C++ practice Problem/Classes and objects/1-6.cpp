#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom{
public:
  int next(){
    while(1){
      int n = rand();
      if((n%2) == 0)
        return n;
    }
  }
  int nextInRange(int num1,int num2){
    while(1){
      int n = rand() % (num2-1) + num1;
      if((n%2) == 0)
        return n;
    }
  }
};
int main(){
  EvenRandom r;
  srand(time(0));
  cout <<"-- 10 random integers from 0 to "<< RAND_MAX <<" --"<<endl;
  for(int i=0;i<10;i++){
    int n = r.next();
    cout << n << ' ';
  }
  cout << endl<<endl << " -- 10 random integers from 2 to 9 =="<<endl;
  for(int i = 0; i<10; i++){
    int n = r.nextInRange(2,9);
    cout << n << ' ';
  }
}
