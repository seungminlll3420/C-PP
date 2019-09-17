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
			getline(cin, name, ' ');
			cin >> rad;
			p->setCircle(name, rad);
	   }
  }
	~CircleManager();
	void searchByName(string name) {
		for (int i = 0; i < size; i++) {
			if (p[i].getname() == name)
				cout << p[i].getname() <<" Area is " <<p[i].getArea();
		}
	}
	void searchByArea(int area) {
		cout << "Search for a circle larger than " << area << endl;
		for (int i = 0; i < size; i++) {
			if (p[i].getArea() > area)
				cout << "The area of the " << p[i].getname() << " is " << p[i].getArea() << ", ";
		}
  }
};
  CircleManager :: ~CircleManager(){
  	delete p;
}

int main() {
	int cl;
  int area;
  string name;
	cout << "the number of circles >> ";
	cin >> cl;
	CircleManager cir(cl);
  cout << "What is the name of the circle you want to search for >> ";
  getline(cin, name ,'\n');
  cir.searchByName(name);
  cout << "Please enter the minimum area as an integer >> ";
  cin >> area;
  cir.searchByArea(area);
}
