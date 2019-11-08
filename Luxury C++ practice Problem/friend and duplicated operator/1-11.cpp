#include <iostream>
using namespace std;

class Stack {
int A[100];
int i = 0;
public:
Stack& operator << (int x){
        A[i++] = x;
        return *this;
}
void operator >>(int &x){
        x = A[--i];
}
bool operator !(){
        if(i == 0) return true;
        else return false;
}
};

int main(){
        Stack stack;
        stack << 3 << 5 << 10;
        while(true) {
                if(!stack) break;
                int x;
                stack >> x;
                cout << x << ' ';
        }
        cout << endl;
}
