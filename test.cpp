#include <iostream>
using namespace std;
class Stack {
int *p;
int pos;
public:
Stack() {
        p = new int[100];
        pos = 0;
}
Stack& operator << (int i) {
        if (pos != 100) {
                p[pos] = i;
                pos++;
                j = pos;
                return *this;
        }
        else {
                cout << "실패";
                return *this;
        }
}
Stack& operator >> (int& i) {

        if (pos != 0) {

                j--;
                i = p[j];
                return *this;
        }
        else {
                cout << "실패";
                return *this;
        }
}
int j;
bool operator ! () {
        if (j == 0) {
                return true;
        }
        else {
                return false;
        }
}
};
int main() {
        Stack stack;
        stack << 3 << 5 << 10;
        while (true) {
                if (!stack) break;
                int x;
                stack >> x;
                cout << x << ' ';
        }
        cout << endl;
}
