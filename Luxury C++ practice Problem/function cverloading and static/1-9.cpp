#include <iostream>
#include <string>
using namespace std;

class Board {

static string a[];
static int f;
public:

static void add(string b){
        a[f] = b;
        f++;
}
static void print(){
        cout<< "==========this is Board============"<< endl;
        for(int i =0; i<f; i++) cout << a[i] << endl;
}
};

int Board :: f =0;

string Board :: a[100];

int main(){
        Board::add("I love you");
        Board::add("me too");
        Board::print();
        Board::add("it's dream");
        Board::print();
}
