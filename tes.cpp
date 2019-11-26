#include <iostream>
#include <vector>
using namespace std;

int main (){
        vector<int> a;
        for(int i= 0; i<10; i++) {
                a.push_back(i);
        }
        for(int i= 0; i<10; i++) {
                cout << a[i] << endl;
        }
        a[3] = a[6];
        a[2] = a[7];
        cout << endl;
        for(int i= 0; i<10; i++) {
                cout << a[i] << endl;
        }
}
