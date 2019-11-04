#include <iostream>
using namespace std;

#include "Adder.h"
#include "Calculator.h"


void Calculator:: run(){
        cout << "Enter two integer";
        int a,b;
        cin >> a >> b;
        Adder adder(a,b);
        cout << adder.process();
}
