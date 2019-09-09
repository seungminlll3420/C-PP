#include <iostream>
using namespace std;

class Oval{
  int Width, Height;
public:
  Oval();
  Oval(int w, int h);
  void set(int w, int h);
  void show();
  ~Oval();
  int getWidth();
  int getHeight();
};

Oval :: Oval() : Oval(1,1){}
Oval ::Oval(int w,int h){
  Width = w;
  Height = h;
}
void Oval ::set(int w,int h){
  Width = w;
  Height = h;
}
Oval :: ~Oval(){
  cout << "Oval decimation : Width = " << Width << " , height = "<< Height<<endl;
}
int Oval:: getWidth(){
  return Width;
}
int Oval:: getHeight(){
  return Height;
}
void Oval :: show(){
  cout << "Width = " << Width << " , height = "<< Height<<endl;
}



int main(){
  Oval a, b(3, 4);
  a.set(10,20);
  a.show();
  cout << b.getWidth() << ","<< b.getHeight()<<endl;
}
