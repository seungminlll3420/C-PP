#include <iostream>
#include <fstream>
using namespace std;
int main(){
        char name[10],dept[20];
        int sid;

        cout << "name>>";
        cin >> name;
        cout << "student number>>";
        cin >> sid;
        cout << "you'r class>>";
        cin >> dept;

        ofstream fout("C:\\Users\\IoT-23\\student.txt");
        if(!fout) {
                return 0;
        }
        fout << name<< endl;
        fout << sid << endl;
        fout<< dept << endl;
}
