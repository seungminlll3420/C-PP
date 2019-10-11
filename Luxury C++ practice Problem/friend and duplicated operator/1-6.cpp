#include <iostream>
using namespace std;

class Matrix {
public:
int a=0;
int b=0;
int c=0;
int d=0;


Matrix(int a =0,int b=0,int c =0,int d =0){
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
}
void show(){
        cout << "Matrix = { " << a << " " << b << " " <<c<< " " << d << " }"<<endl;
}
friend Matrix operator + (Matrix &t,Matrix &i);
friend Matrix operator += (Matrix &t,Matrix i);
friend bool operator == (Matrix t, Matrix i);
// Matrix operator + (Matrix i){
//   Matrix j;
//   j.a = a + i.a;
//   j.b = b + i.b;
//   j.c = c + i.c;
//   j.d = d + i.d;
//   return j;
// }
// void operator += (Matrix i){
//   a = a + i.a;
//   b = b + i.b;
//   c = c + i.c;
//   d = d + i.d;
// }
// bool operator == (Matrix i){
//   if((a == i.a) & (b == i.b)&(c == i.c)&(d == i.d)) return true;
//   else return false;
//
// }
};
Matrix operator + (Matrix &t,Matrix &i){
        Matrix j;
        j.a = t.a + i.a;
        j.b = t.b + i.b;
        j.c = t.c + i.c;
        j.d = t.d + i.d;
        return j;
}

Matrix operator += (Matrix &t,Matrix i){
        t.a = t.a + i.a;
        t.b = t.b + i.b;
        t.c = t.c + i.c;
        t.d = t.d + i.d;
        return t;
}
bool operator == (Matrix t, Matrix i){
        if((t.a == i.a) & (t.b == i.b)&(t.c == i.c)&(t.d == i.d)) return true;
        else return false;
}
int main(){
        Matrix a(1,2,3,4), b(2,3,4,5),c;
        c=a+b;
        a+=b;
        a.show(); b.show(); c.show();
        if(a == c) cout << "a and c are the same";
}
