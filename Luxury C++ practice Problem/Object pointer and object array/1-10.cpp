#include <iostream>
using namespace std;
#include <string>

class Person {
	string name;
public:
	Person();
	Person(string name) {
		this->name = name;
	}
	string getname() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
};
Person::Person() {

}
class Family {
	Person *p;
	int size;
	string Familyname;
public:
	Family(string name, int size) {
		p = new Person[size];
		Familyname = name;
		this->size = size;
	}
	void show() {
		cout << "There are " << size << " members in the " << Familyname << " family." << endl;
		for (int i = 0; i < size; i++) {
			cout << p[i].getname() << '\t';
		}
	}
	void setName(int num, string sname) {
		p[num].setName(sname);
	}
	~Family();
};
Family:: ~Family() {

}

int main() {
	Family *simpson = new Family("Simson", 3);
	simpson->setName(0, "Mr. simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}
