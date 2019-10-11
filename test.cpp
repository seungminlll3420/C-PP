#include <iostream>
using namespace std;

#include <stdlib.h>
#include <time.h>


class A {
public:
A(){

}
~A(){
        cout << "A";
}
void func(){
        f();
}

virtual void f() {
        cout << "A::"<<endl;
}
};


class B : public A {
public:
B(){

}
~B(){
        cout << "B";
}
virtual void f() {
        cout << "B::"<<endl;
}
};

class C : public B {
public:
C(){

}
~C(){
        cout << "C";
}
virtual void f() {
        cout << "C::" <<endl;
}
};


int main(){
        C c;
        c.f();
        A* pa;
        B* pb;
        pa = pb = &c;
        pb->f();
        pa->f();
        pa->func();
}
