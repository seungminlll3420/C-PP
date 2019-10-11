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
friend bool operator == (Book b, int a);
friend bool operator == (Book b, string a);
friend bool operator == (Book b, Book op2);
// bool operator == (int a){
//   if(price == 30000)
//     return true;
//   else
//     return false;
// }
// bool operator == (string a){
//   if(!title.compare(a)) return true;
//   else return false;
// }
// bool operator == (Book op2){
//   if((title == op2.title)&(price == op2.price)&(pages == op2.price)) return true;
//   else return false;
// }
};

bool operator == (Book b, int a){
        if(b.price == 30000)
                return true;
        else
                return false;
}
bool operator == (Book b, string a){
        if(b.title == a) return true;
        else return false;
}
bool operator == (Book b, Book op2){
        if((b.title == op2.title)&(b.price == op2.price)&(b.pages == op2.price)) return true;
        else return false;
}

int main(){
        Book a("Luxury c++", 30000,500), b("high quality c++",30000,500);
        if(a ==30000) cout << "OR 30000won" <<endl;
        if(a=="Luxury c++") cout << "this is Luxury c++"<<endl;
        if(a==b) cout << " two Book is same";
}
