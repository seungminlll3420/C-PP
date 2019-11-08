#include <vector>
#include <iostream>
using namespace std;
int main(){
        vector<int> v;
        int x;
        int sum =0;
        while(1) {
                cout << "Plz Enter INTEGER( 0 !=) >> ";
                cin >> x;
                if(x == 0) {
                        break;
                }
                v.push_back(x);
                for(int i =0; i<v.size(); i++) {
                        cout << v[i] << " ";
                }
                cout << endl;
                sum =0;
                for(int i =0; i<v.size(); i++) {
                        sum += v[i];
                }
                cout << (double)sum/v.size() << endl;
        }
}
