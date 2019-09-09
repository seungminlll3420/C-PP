#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class Random{
public:
  int next(){

    return rand();
  }
  int nextInRange(int num1,int num2){

    return rand() % num2 + num1;
  }
};


int main(){
  Random r;
  srand(time(0));
  cout <<"-- 10 random integers from 0 to "<< RAND_MAX <<" --"<<endl;
  for(int i=0;i<10;i++){
    int n = r.next();
    cout << n << ' ';
  }
  cout << endl<<endl << " -- 10 random integers from 2 to 4 =="<<endl;
  for(int i = 0; i<10; i++){
    int n = r.nextInRange(2,3);
    cout << n << ' ';
  }
}
