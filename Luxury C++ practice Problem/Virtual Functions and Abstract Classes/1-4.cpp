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

class WhileLoopAdder : public LoopAdder {

public:
WhileLoopAdder(string a) : LoopAdder(a){

}
virtual int calculate(){
        int x = getX();
        int y = getY();
        int sum = 0;
        while(x <= y) {
                sum += x++;
        }
        return sum;
}
};
class DoWhileLoopAdder : public LoopAdder {
public:
DoWhileLoopAdder(string a) : LoopAdder(a){

}
virtual int calculate(){
        int x = getX();
        int y = getY();
        int sum = 0;
        do {
                sum += x;

        } while(x++ != y);
        return sum;
}
};

int main(){
        WhileLoopAdder whileLoop("while Loop");
        DoWhileLoopAdder doLoop("do Loop");

        whileLoop.run();
        doLoop.run();
}
