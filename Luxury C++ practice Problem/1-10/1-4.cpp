#include <iostream>
using namespace std;

template <class T> bool search(T i,T x[], int j){
        for(int q = 0; q < j; q++) {
                if(x[q] == i) return true;
        }
        return false;
}

int main(){
        int x[] = {1,10,100,5,4};
        if(search(100, x, 5)) cout << "ACC";
        else cout << "NOT";
}
