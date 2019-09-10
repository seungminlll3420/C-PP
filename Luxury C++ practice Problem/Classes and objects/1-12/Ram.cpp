#include <iostream>
using namespace std;

#include "Ram.h"

Ram::Ram() {
	men [100 * 1024]= {0, };
	size = 100 * 1024;
}
char Ram::read(int address) {
	return men[address];
}
void Ram::write(int address, char valur) {
	men[address] = valur;
}
Ram :: ~Ram() {
	cout << "메모리 제거됨";
}
