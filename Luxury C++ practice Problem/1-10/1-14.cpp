#include <iostream>
#include <map>
using namespace std;

int main(){
        map <string, string> dic;
        cout << "start"<<endl;
        int x;
        string a, b;
        while (1) {
                cout << "INSERT : 1, gumsa : 2, over : 3 ";
                cin >> x;
                if(x == 1) {
                        cout << "Enter >>";
                        cin >> a >> b;
                        dic.insert(make_pair(a,b));
                }else if(x == 2) {
                        cout << "name >>";
                        cin >> a;
                        cout << "amho >>";
                        cin >>b;
                        if(dic.at(a) == b) {
                                cout << "pass"<<endl;
                        }else{
                                cout << " NOT"<<endl;
                        }
                }else if(x == 3) {
                        break;
                }
        }
}
