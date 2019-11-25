#include "vector_cast.h"

void vector_cast :: cast_add(vector<cast>& casts, string name, int age, string Entertainment) {
        cast *p = new cast;
        p->set(name, age, Entertainment);

        casts.push_back(*p);

}
void vector_cast::cast_delete(vector<cast> &casts, string name) {


        for (int it = 0; it < casts.size(); it++) {
                if (casts[it].getname() == name) {
                        casts.erase(casts.begin() + it);
                }
        }
}
void vector_cast :: cast_modify(vector<cast> &casts, string name) {

        for (int i = 0; i < casts.size(); i++) {
                if (casts[i].getname() == name) {
                        string a, b;
                        int c;
                        cout << "이름, 나이, 소속사 순으로 입력해주세요. ";
                        cin >> a >> c >> b;
                        casts[i].setname(a);
                        casts[i].setage(c);
                        casts[i].setEntertainment(b);
                }
        }
}
void vector_cast::show(vector<cast> &casts) {
        for (int it = 0; it < casts.size(); it++) {
                cout << casts[it].getname() << ' ' << casts[it].getage() << ' ' << casts[it].getEntertainment() << endl;
        }
}
