#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char password[11];
	cout << "Please enter your computer password." << endl;
	while (true) {
		cout << "password>>";
		cin >> password;
		if (strcmp(password, "c++") == 0) {
			cout << "Exit the program.";
			break;
		}
		else
			cout << "The password is wrong.";
	}

}
