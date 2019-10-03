#include <iostream>
using namespace std;
class Color {
  int red, green, blue;
public:
  Color(){
  red = green = blue = 0;
  }
  Color(int r, int g, int b){
    red = r;
    green = g;
    blue = b;
  }
  void setColor(int r, int g, int b){
    red = r;
    green = r;
    blue = b;
  }
  void show(){
    cout << red << "\t" << green << "\t" << blue << endl;
  }
  Color operator + (Color b){
    Color c;
    c.red = red + b.red;
    c.green = green + b.green;
    c.blue = blue + b.blue;

    return c;
  }
  bool operator == (Color b){
    if((red == b.red)&&(green == b.green)&&(blue == b.blue)) return true;
    else return false;
  }
};

int main(){
  Color red(255,0,0), blue(0,0,255),c;
  c=red+blue;
  c.show();
  Color fuchsia(255,0,255);
  if(c == fuchsia) cout << "this is purple";
  else cout << "this is not purple";
}
