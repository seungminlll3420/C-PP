#include "cast.h"
#include "vector_cast.h"

int main() {
        vector_cast a;
        vector<cast> b;
        int age;
        string name;
        string En;

        int out = 0;
        int key;
        while (out != 1) {
                cout << "1 : 사람 추가하기 2 : 사람 삭제하기 3: 사람 수정하기 4 : 추가된 사람들 보기" << endl;
                cin >> key;

                switch (key) {
                case 1:
                        cout << "이름 나이 소속사를 적어" << endl;
                        cin >> name >> age >> En;
                        a.cast_add(b,name, age, En);
                        break;
                case 2:
                        cout << "삭제할 사람의 이름을 적어봐" << endl;
                        cin >> name;
                        a.cast_delete(b, name);
                        break;
                case 3:
                        cout << "사람을 수정하자" << endl;
                        cin >> name;
                        a.cast_modify(b, name);
                        break;
                case 4:
                        a.show(b);
                        break;
                }
        }
}
