#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char password[11];
	cout << "input your computer password" << endl;
	while (true) {
		cout << "password>>";
		cin >> password;
		if (strcmp(password, "c++") == 0) {
			cout << "program over";
			break;
		}
		else
			cout << "no";
	}

}
