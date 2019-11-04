#include <iostream>
using namespace std;

class Abs {
public:
virtual bool push(int n) = 0;
virtual bool pop(int & n) = 0;
virtual int szie() = 0;
};

class IntStack : public Abs {
int psize;
int i;
int *p;
public:
IntStack(int n){
        psize = n;
        i=-1;
        p = new int [psize];
}
virtual bool push(int n){
        if(i < psize)
                p[++i] = n;
        else
                return false;
        return true;
}
virtual bool pop(int & n){
        if(i != -1) n = p[i--];
        else return false;
        return true;
}
virtual int szie(){
        return psize;
}
};

int main(){
        IntStack ab(10);
        ab.push(1);
        ab.push(2);
        ab.push(3);
        ab.push(4);
        int x;
        ab.pop(x);
        cout<< x<< endl;
        ab.pop(x);
        cout<< x<< endl;;
        ab.pop(x);
        cout<< x<< endl;;
        ab.pop(x);
        cout<< x<< endl;;

}
