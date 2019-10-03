#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

class Random{
public:
  static void seed(){ srand((unsigned)time(0));}
  static int nextInt(int min = 0, int max = 32767){
    cout <<endl<< "Outputs 10 random Integer " << endl;
    for(int i =0; i<10;i++){
      int a = rand()% (max-1) +min;
      cout << a << " ";
    }
    return 0;
  }
  static char nextAlphabet(){
    int i = 1;
    int a;
    char c;
    cout <<endl<< "Outputs 10 random Alphabet " << endl;
    while(i!=10){
      a = rand()% (122) +65;
      if(('A'<= a && 'Z' >=a)|('a'<= a && 'z' >=a) ) {
        i++;
        c = a;
        cout << c<< " ";
      }
    }
    return 0;
    }
  static double nextDouble(){
    cout <<endl << "Outputs 10 random Double " << endl;
    for(int i =0; i<10;i++){
      double a = (double)rand() /32767;
      cout << a << " ";
      if(i == 4)
        cout << endl;
    }
    return 0;
  }
};
int main(){
  srand(time(0));
  Random :: seed();
  Random :: nextInt();
  Random :: nextAlphabet();
  Random :: nextDouble();
}
