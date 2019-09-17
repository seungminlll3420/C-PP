#include <iostream>
using namespace std;
#include <string>
class Person{
  string name;
  string tel;
public:
  string getname() {
    return name;
  }
  string getTel(){
    return tel;
  }
  void set(string name, string tel){
    this->name = name;
    this->tel = tel;
  }
};
int main(){
  Person *p = new Person [3];
  string name;
  string tel;
  string fined;
  cout << "Please enter your name and phone number."<< endl;
  for(int i = 0; i< 3 ;i++){
    cout << "Person "<< i+1 << " >> ";
    getline(cin,name,' ');
    getline(cin,tel,'\n');
    (p+i)->set(name, tel);
  }
  cout << "Everyone's name is " << p->getname()<< " " << (p+1)->getname() << " " << (p+2)->getname() << endl;
  cout << "Search for your phone number. Please enter your name >> ";
  getline(cin,fined,'\n');
  for(int i = 0; i< 3 ;i++){
    if((p+i)->getname() == fined){
      cout << "phone number is "<< (p+i)->getTel();
    }
  }
  delete [] p;
}
