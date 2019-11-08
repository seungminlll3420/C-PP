#include <iostream>
#include <vector>
using namespace std;

class AAA {
int i = 0;
public:
int get(){
        return i;
}

};

int main(){
        vector<AAA> a;
        AAA * p = new AAA;
        a.push_back(*p);

}
