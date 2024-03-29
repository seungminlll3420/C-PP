#ifndef EXP_H
#define EXP_H
class Exp {
	int sum = 1;
	int B;
	int E;
public:
	Exp() {
		B = 1;
		E = 1;
	}
	Exp(int c) {
		B = c;
		E = 1;
	}
	Exp(int a, int b) {
		B = a;
		E = b;
	}
	int getValue() {
		int i = 0;
		while (i != E) {
			sum = B * sum;
			i++;
		}
		return sum;
	}
	int getBase() {
		return B;
	}
	int getExp() {
		return E;
	}
	bool equals(Exp X) {
		if (sum == X.sum)
			return true;
		else
			return false;
	}
};

#endif
