#include <iostream>
using namespace std;

class MyVector{
    int *men;
    int size;
  public:
    //MyVector(){
    //   men = new int [100];
    //   size =100;
    //   for(int i =0; i<size;i++) men[i] =0;
    // }
    // MyVector(int n , int val){
    //   men = new int [n];
    //   size = n;
    //   for(int i =0; i<size;i++) men[i] =val;
    // }
    MyVector(int n =100 , int val =0){
      men =new int [n];
      size = n;
      for(int i =0; i<size;i++) men[i] =val;
    }
    ~MyVector(){ delete [] men;}
};

int main(){

}
