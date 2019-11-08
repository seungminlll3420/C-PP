#include <iostream>
using namespace std;

class Matrix {
int e[4];
public:
Matrix(int a=0,int b=0,int c=0, int d =0){
        e[0] = a; e[1] = b; e[2] = c; e[3] = d;
}
friend void operator >> (Matrix k,int op[]);
friend void operator << (Matrix &k, int op[]);
// void operator >> (int op[]){
//   for(int i =0; i<4;i++) op[i] = e[i];
// }
// void operator << (int op[]){
//   for(int i =0; i<4;i++) e[i] = op[i];
// }
void show(){
        cout << "Matrix = { " << e[0] << " " << e[1] << " " << e[2] << " " << e[3] << " }"<<endl;
}
};
void operator << (Matrix &k, int op[]){
        for(int i =0; i<4; i++) k.e[i] = op[i];
}
void operator >> (Matrix k,int op[]){
        for(int i =0; i<4; i++) op[i] = k.e[i];
}

int main(){
        Matrix a(4,3,2,1), b;
        int x[4], y[4] = {1,2,3,4};
        a >> x;
        b << y;
        for(int i=0; i<4; i++) cout << x[i]<< ' ';
        cout << endl;
        b.show();
}
