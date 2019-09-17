#include <iostream>
using namespace std;
#include <string>


class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name;
		this->radius = radius;
	}
	double getArea() {
		return 3.14*radius*radius;
	}
	string getname() {
		return name;
	}
};

class CircleManager {
	Circle *p;
	int size;
public:
	CircleManager(int size) {
		this->size = size;
		p = new Circle[size];
		string name;
		int rad;
		for (int i = 0; i < size; i++) {
			cout << "name of circle and radius of circle " << i + 1 << " >> ";
			cin >> name >> rad;
			p[i].setCircle(name, rad);
		}
	}
	~CircleManager() {
		delete p;
	}
	void searchByName() {
		cout << "What is the name of the circle you want to search for >> ";
		string name;
		cin >> name;

		for (int i = 0; i < size; i++) {
			if (name == p[i].getname()) {
				cout << p[i].getname() << " Area is " << p[i].getArea() << endl;
			}
		}
	}
	void searchByArea() {
		cout << "Please enter the minimum area as an integer >> ";
		int area;
		cin >> area;
		cout << "Search for a circle larger than " << area << endl;
		for (int i = 0; i < size; i++) {
			if (p[i].getArea() > area)
				cout << "The area of the " << p[i].getname() << " is " << p[i].getArea() << ", ";
		}
	}
};


int main() {
	int cl;
	cout << "the number of circles >> ";
	cin >> cl;
	CircleManager cir(cl);
	cir.searchByName();
	cir.searchByArea();
}
