#include <iostream>
using namespace std;
#include <string>

class Person {
	string name;
public:
	Person(string name) {
		this->name = name;
	}
	string getname() {
		return name;
	}
	void setName(string sname) {
		name = sname;
	}
};

class Family {
	Person *p;
	int size;
public:
	Family(string name, int size) {
		p->setName(name);
		Person *pp = new Person(name)[size];
	}
	void show() {
		cout << "There are " << size << " members in the " << p->getname() << " family." << endl;
		for (int i = 0; i < 3; i++) {
			cout << pp[i].getname() << '\t';
		}
	}
	void setName(int num, string sname) {
		pp[num].setName(sname);
	}
	~Family();
};

int main() {
	Family *simpson = new Family("Simson", 3);
	simpson->setName(0, "Mr. simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}
