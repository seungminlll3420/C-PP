#include <iostream>
using namespace std;

class Circle {
int radius;
public:
Circle(int radius =0){
        this->radius = radius;
}
void show(){
        cout << "radius = " << radius << " Circle" << endl;
}
int getradius(){
        return radius;
}
friend Circle operator +(int x, Circle a);

};

Circle operator +(int x, Circle a){
        Circle b;
        b.radius = x + a.radius;
        return b;
}

int main(){
        Circle a(5), b(4);
        b = 1 + a;
        a.show();
        b.show();
}
