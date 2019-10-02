#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int *concat(int s1[], int s2[], int size) {
		int *p = new int[size * 2];
		for (int i = 0; i < size; i++) p[i] = s1[i];

		for (int i = 0; i < size; i++) p[i + size] = s2[i];

		return p;
	}
	static int* remove(int s1[], int s2[], int size, int& retSize) {
		int *p = new int[size];
		int x = 0;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (s1[i] == s2[j])
					break;
				if (j == 4)
					p[x++] = s1[i];
			}
		}
		retSize = x;
		if (retSize == 0) {
			return NULL;
		}
		return p;
	}
};

int main() {

	int x[5];
	int y[5];

	cout << "plz Enter 2 integer in array X : ";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}

	cout << "plz Enter 2 integer in array Y : ";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	int *p;
	p = ArrayUtility2::concat(x, y, 5);
  cout << "Outputs a combined integer array."<< endl;
	for (int i = 0; i < 10; i++)	cout << p[i];
	int c = 0;
	p = ArrayUtility2::remove(x, y, 5,c);
	cout << endl <<"Outputs array x[] minus array y[]." <<endl;
	for (int i = 0; i < c; i++)	cout << p[i];
}
