#include <iostream>
using namespace std;
// int big(int a,int b){
//   if(a<b){
//     if(b>100){
//       return 100;
//     }else{
//       return b;
//     }
//   }else{
//     if(a>100){
//       return 100;
//     }else{
//       return a;
//     }
//   }
// }
// int big(int a,int b, int c){
//   if(a<b){
//     if(b>c){
//       return c;
//     }else{
//       return b;
//     }
//   }else{
//     if(a>c){
//       return c;
//     }else{
//       return a;
//     }
//   }
// }
int big(int a=0,int b =0,int c =100){
  if(a<b){
    if(b>c){
      return c;
    }else{
      return b;
    }
  }else{
    if(a>c){
      return c;
    }else{
      return a;
    }
  }
}

int main(){
  int x = big(3,5);
  int y = big(300,60);
  int z = big(30,60,50);
  cout<<x<<' '<< y <<' '<< z << endl;
}
