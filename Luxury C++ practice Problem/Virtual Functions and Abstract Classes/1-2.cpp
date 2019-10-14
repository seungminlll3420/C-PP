#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	virtual ~Converter() {

	}
	void run() {
		double src;
		cout << getSourceString() << getDestString() << "ch";
		cout << getSourceString() << "Enter getSourceString>> ";
		cin >> src;
		cout << "result : " << convert(src) << getDestString() << endl;
	}
};
class KmToMile : public Converter {
public:
	KmToMile(double i) : Converter(i) {

	}
	virtual ~KmToMile() {

	}
	virtual double convert(double src) {
		return src / ratio;
	}
	virtual string getSourceString() {
		return "Km";
	}
	virtual string getDestString() {
		return "Mile";
	}
};
int main() {
	KmToMile toMile(1.609344);
	toMile.run();
}
