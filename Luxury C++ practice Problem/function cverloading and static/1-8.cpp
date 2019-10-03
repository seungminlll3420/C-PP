#include <iostream>
using namespace std;
#include <string>
// compare()
class Trace{
  static char di[10][100];
  static int f;
  static int ff;
  static int m;
  static int mm;
public:

  static void put(string a, string b){
    f=0;ff=0;m=0;mm=0;
    int i =0;
    if(a.compare("f()")){
      while(ff!=b.length()){
        di[f][ff] = b [ff];
        ff++;
      }
    ff = 0;
    }else{
      while(mm != b.length()){
        di[m][mm] = b[mm];
        mm++;
      }
      mm = 0;
    }
  }
};
void f(){
  int a,b,c;
  cout << "Enter 2 integer : ";
  cin >> a>> b;
  Trace:: put("f( ) ", "Integer input received.");
  c = a+b;
  Trace:: put("f( ) ", " sum");
  cout << "a+b ="<<c<<endl;

}
int main(){
  Trace:: put("main()", "program start");
  f();
  Trace::put("main()", "exit");
  Trace :: print("f()");
  Trace::print();
}
