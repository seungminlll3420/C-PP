#include <iostream>
using namespace std;

class LoopAdder {
string name;
int x, y, sum;
void read(){
        cout << name << ":"<<endl;
        cout <<"add x to y. plz Enter two Integer >> ";
        cin >> x >> y;
}
void write(){
        cout << "add "<<x<<" to " << y <<" : " << sum <<endl;
}
protected:
LoopAdder(string name=""){
        this->name = name;
}
int getX(){
        return x;
}
int getY(){
        return y;
}
virtual int calculate() = 0;
public:
void run(){
        read();
        sum = calculate();
        write();
}
};

class ForLoopAdder : public LoopAdder {
public:
ForLoopAdder(string a) : LoopAdder(a){

}
virtual int calculate(){
        int x = getX();
        int y = getY();
        int sum = 0;
        for(int i =x; i<=y; i++) {
                sum +=i;
        }
        return sum;
}
};

int main(){
        ForLoopAdder forLoop("For Loop");
        forLoop.run();
}
