#include <iostream>
using namespace std;

class Circle {
int radius;
public:
void setRadius(int radius){
        this->radius = radius;
}
double getArea(){
        return 3.14*radius*radius;
}

};
int main(){
        int num;
        int s = 0;
        Circle *p = new Circle [3];
        for(int i =0; i<3; i++) {
                cout << "radius of circle " << i+1 << " >> ";
                cin >> num;
                (p+i)->setRadius(num);
                if(100 < (p+i)->getArea()) {
                        s++;
                }
                cout << endl;
        }
        cout << "There are " << s <<" circles whose area is greater than 100.";
        delete [] p;
}
