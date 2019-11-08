#include <iostream>
using namespace std;

template <class T>
T * remove(T src[], T sizeSrc, T minus[], T sizeMinus, T & retSize){
        T *x = new int [sizeMinus];
        T t=0;

        for(int i =0; i< sizeSrc; i++) {
                for(int j = 0; j < sizeMinus; j++) {
                        if(src[i] == minus[j]) {

                                break;
                        }
                        if(j == sizeMinus-1) {
                                x[t] = src[i];
                                t++;

                        }
                }
        }

        retSize = t;

        return x;

}
int main(){
        int x[5]= {1,2,3,4,5};
        int y[3]={2,4,6};
        int *z;
        int zsize;
        z = remove(x,5,y,3,zsize);
        for(int i= 0; i<zsize; i++) {
                cout << z[i] <<", ";
        }
}
