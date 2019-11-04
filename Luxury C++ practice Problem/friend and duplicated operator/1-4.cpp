#include <iostream>
#include <string>
using namespace std;

class Book {
string title;
int price, pages;
public:
Book(string title="",int price=0, int pages=0){
        this->title = title;
        this->price = price;
        this->pages = pages;
}
void show(){
        cout << title << ' ' << price << "won" << pages << " pages" << endl;
}
string getTitle(){
        return title;
}
friend bool operator < (string a, Book b);
};
bool operator < (string a, Book b){
        if(a < b.getTitle()) return true;
        else return false;
}
// 왜 클래스 내 구현은 안될까??
int main(){
        Book a("youth",20000,300);
        string b;
        cout << " Enter Book's name >>";
        getline(cin, b);
        if(b<a)
                cout<< a.getTitle() << "LEE" << b << "back" << endl;
}
