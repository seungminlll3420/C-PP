#include <iostream>
using namespace std;
template <class T> bool equalArrays(T a[],T b[], int i){
        for(int j =0; j<i; j++) {
                if(a[j] != b[j]) return false;
        }
        return true;
}

int main(){
        int x[] = {1,10,100,5,4};
        int y[] = {1,10,100,5,4};

        if(equalArrays(x,y,5) ) cout << "same";
        else cout << "not same";
}
