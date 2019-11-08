#include <iostream>
using namespace std;

class AvstractGate {
protected:
bool x,y;
public:
void set(bool x, bool y){
        this->x = x; this->y = y;
}
virtual bool operation() = 0;
};

class Andgete : public AvstractGate {
public:
virtual bool operation(){
        return (x & y);
}
};

class Orgete : public AvstractGate {
public:
virtual bool operation(){
        return (x | y);
}
};

class Xorgete : public AvstractGate {
public:
virtual bool operation(){
        return (x ^ y);
}
};

int main(){
        Andgete andg;
        Orgete org;
        Xorgete xorg;

        andg.set(true,false);
        org.set(true, false);
        xorg.set(true, false);
        cout.setf(ios::boolalpha);
        cout<< andg.operation() << endl;
        cout << org.operation() << endl;
        cout << xorg.operation() << endl;

}
