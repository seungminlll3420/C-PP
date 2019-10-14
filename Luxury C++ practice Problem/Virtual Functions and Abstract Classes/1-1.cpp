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
class WonToDollar : public Converter {
public:
	WonToDollar(double i) : Converter(i) {

	}
	virtual ~WonToDollar() {

	}
	virtual double convert(double src) {
		return src / ratio;
	}
	virtual string getSourceString() {
		return "Dallar";
	}
	virtual string getDestString() {
		return "Won";
	}
};
int main() {
	WonToDollar wd(1010);
	wd.run();
}
