#include <iostream>
using namespace std;

class SortedArray {
	int size;
	int *p;
	void sort() {
		int temp;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size - 1; j++) {
				if (p[j] > p[j+1]) {
					temp = p[j];
          p[j] = p[j+1];
          p[j+1] = temp;
				}
			}
		}
	}
public:
	SortedArray() { p = NULL; size = 0; }
	SortedArray(SortedArray& src) {
    size = src.size;
		p = new int[size];

		for (int i = 0; i < size; i++) {
			p[i] = src.p[i];
		}
	}
	SortedArray(int p[], int size) {
    this->size = size;
		this->p = new int[size];
		for (int i = 0; i < size; i++) {
			this->p[i] = p[i];
		}
    sort();
	}
	~SortedArray() {
		if (p) {
			delete[] p;
		}
	}
	SortedArray operator + (SortedArray& op2) {
		SortedArray R;
		R.size = size + op2.size;
		R.p = new int[R.size];
    int i;
		for ( i = 0; i < size; i++) {
			R.p[i] = p[i];
		}
    int index = i;
		for (int i = 0; i < op2.size; i++) {
			R.p[index++] = op2.p[i];
		}
    R.sort();
		return R;
	}
	SortedArray& operator = (const SortedArray& op2) {
		if (p) {
			delete [] p;
		}
    size = op2.size;
		p = new int[size];
		for (int i = 0; i < size; i++) {
			p[i] = op2.p[i];
		}
		return *this;
	}

	void show() {

		cout << "output Array : ";
		for (int i = 0; i < size; i++) {
			cout << p[i] << " ";
		}
		cout << endl;
	}


};

int main() {
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show();
	b.show();
	c.show();
}
