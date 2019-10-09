#include <iostream>
#include <string>
using namespace std;

class printer {
protected:
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	printer(int printed, int available, string model, string manufacturer) {
		printedCount = printed;
		availableCount = available;
		this->model = model;
		this->manufacturer = manufacturer;
	}

	string getmodel() {
		return model;
	}
	string getmanufacturer() {
		return manufacturer;
	}
	int getprintedCount() {
		return printedCount;
	}
	int getavailableCount() {
		return availableCount;
	}
	int print(int pages) {
		if (availableCount < pages) {
			cout << "over pages";
			return 0;
		}
		else {
			availableCount -= pages;
			printedCount += pages;
			cout << endl << "print~~~ OK!" << endl;
			return 1;
		}
	}
  ~printer(){

  }
};
class Inkjet : public printer {
	int availableInk;
public:
	Inkjet(int printed, int available, string model, string manufacturer, int availableI) : printer(printed, available, model, manufacturer) {
		availableInk = availableI;
	}
	int getInk() {
		return availableInk;
	}
	void printInkJet(int pages) {
		if (availableInk < pages) cout << "over Ink";
		else
			if (print(pages)) availableInk -= pages;
	}
  ~Inkjet(){

  }
};
class Laser : public printer {
	int availableToner;
public:
	Laser(int printed, int available, string model, string manufacturer, int availableT) : printer(printed, available, model, manufacturer) {
		availableToner = availableT;
	}
	int getToner() {
		return availableToner;
	}
	void printLaser(int pages) {
		if (availableToner < 1) cout << "over Toner";
		else
			if (print(pages)) availableToner -= 1;
	}
  ~Laser(){

  }
};
int main() {
	int pages;
	int printer;
	Inkjet qw(0, 5, "HP", "Officejet V40", 10);
	Laser we(0, 3, "samsung", "SCX-6x45", 20);

	cout << "The current operation of two printers are as follows." << endl;
	cout << "InKjet : " << qw.getmodel() << ", " << qw.getmanufacturer() << ", " << "pages : " << qw.getavailableCount() << ", " << "Ink : " << qw.getInk() << endl;
	cout << "Laser : " << we.getmodel() << ", " << we.getmanufacturer() << ", " << "pages : " << we.getavailableCount() << ", " << "Ink : " << we.getToner() << endl;

	while (1) {
		cout << "Plz Enter printer(1: InKjet, 2: Laser) and pasge >> ";
		cin >> printer >> pages;
		char yn;
		if (printer == 1) {
			qw.printInkJet(pages);
		}
		else if (printer == 2) {
			we.printLaser(pages);
		}

		cout << endl;
		cout << qw.getmodel() << ", " << qw.getmanufacturer() << ", " << "pages : " << qw.getavailableCount() << ", " << "Ink : " << qw.getInk() << endl;
		cout << we.getmodel() << ", " << we.getmanufacturer() << ", " << "pages : " << we.getavailableCount() << ", " << "Ink : " << we.getToner() << endl;
		cout << "continued ?(y/n)";
		cin >> yn;
		if (yn == 'n') {
			return 0;
		}
	}

}
