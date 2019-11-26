#include "vector_viewer.h"

int vector_viewer::add(vector<viewer> &viewers, string PhoneNumber) {
        viewer *p = new viewer;
        p->set(PhoneNumber, 0, 0);

        viewers.push_back(*p);
        return viewers.size() - 1;
}
void vector_viewer::vote(vector<viewer> &viewers,vector<cast> &cast,int num) {
        string name, yn;
        int key = 1;
        int ch = 0;
        int it;
        while (key) {
                int i = viewers[num].getVotePresence();
                switch (i) {
                case 0:
                        cout << "투표하실 참가자의 이름을 입력해주세요.";
                        cin >> name;
                        for (it = 0; it < cast.size(); it++) {
                                if (cast[it].getname() == name) break;
                        }
                        if (it == cast.size()) {
                                cout << "없는 출연진입니다." << endl;
                                key = 0;
                                break;

                        }

                        cout << "투표 하시겠습니까? [Y/N] ";
                        cin >> yn;
                        if (yn == "y" || yn == "Y") {
                                viewers[num].vote(0, name);
                                for (int it = 0; it < cast.size(); it++) {
                                        if(cast[it].getname() == name) cast[it].addvote();
                                }
                                cout << "정상적으로 투표되었습니다." << endl;
                                key = 0;
                                break;
                        }
                        else {
                                key = 0;
                                break;
                        }
                case 1:
                        cout << "투표하실 참가자의 이름을 입력해주세요.";
                        cin >> name;
                        for (it = 0; it < cast.size(); it++) {
                                if (cast[it].getname() == name) break;
                        }
                        if (it == cast.size()) {
                                cout << "없는 출연진입니다."<< endl;
                                key = 0;
                                break;

                        }
                        cout << "투표 하시겠습니까? [Y/N].";
                        cin >> yn;
                        if (yn == "y" || yn == "Y") {
                                viewers[num].vote(1, name);
                                for (int it = 0; it < cast.size(); it++) {
                                        if (cast[it].getname() == name) cast[it].addvote();
                                }
                                cout << "정상적으로 투표되었습니다." << endl;
                                key = 0;
                                break;
                        }
                        else {
                                key = 0;
                                break;
                        }
                        break;
                case 2:
                        cout << "더이상 투표하실수 없습니다." << endl;
                        key = 0;
                        break;
                default:
                        break;
                }
        }
}

void vector_viewer::donation(vector<viewer> &viewers, int num) {
        int money;
        cout << "후원하실 금액을 입력해주세요.";
        cin >> money;
        viewers[num].donate(money);
        cout << "정상적으로 후원되었습니다." << endl;
}

void vector_viewer::v_show(vector<viewer> &viewers, int num) {
        cout << "휴대폰 번호 : " << viewers[num].getNumber() << " 투표한 수 : " << viewers[num].getVotePresence() << " 투표한 사람 : " << viewers[num].getName() << " 후원한 금액 : " << viewers[num].getDonation() << endl;
}

int vector_viewer::check(vector<viewer> &viewers, string PhoneNumber) {
        int i = 0;
        for (i = 0; i < viewers.size(); i++) {
                if (viewers[i].getNumber() == PhoneNumber) {
                        return i;
                }
        }
        if (i == viewers.size()) {
                return -1;
        }
}
void vector_viewer::show(vector<cast> cast) {
        for (int it = 0; it < cast.size(); it++) {
                cout << cast[it].getname() << " : votes -> " <<cast[it].getvote()<< " ranks -> " << cast[it].getrank() << endl;
        }

}
void vector_viewer::addmy_star(vector<viewer> &viewers, vector<cast> &casts, int num) {
        string names[3];
        string name;
        int j = 0;
        int out = 0;
        int key = 0;
        char keystr;
        out = 0;
        cout << " ====== Pick 3 stars! ====== " << endl << "!! Once selected star cannot be changed. !!" << endl;
        while (out != 1) {
                cout << " 1: Registering Your Star 2: See your own star 3: Go to the previous screen. " << endl;
                cin >> key;

                switch (key) {
                case 1:
                        if (viewers[num].getmystar().size() == 3) {
                                cout << "All already registered !!" << endl;
                                break;
                        }
                        cin >> name;
                        for (int it = 0; it < casts.size(); it++) {
                                if (casts[it].getname() == name) {
                                        cout << "Should I register " << name << "? (y or n) " << endl;
                                        cin >> keystr;
                                        if (keystr == 'y' || keystr == 'Y') {
                                                cout << "Registered!!" << endl;
                                                viewers[num].getmystar().push_back(name);
                                                names[j++] = name;
                                                break;
                                        }
                                        else if (keystr == 'n' || keystr == 'N') {
                                                cout << "Please choose someone else!!" << endl;
                                                break;

                                        }
                                        else {
                                                cout << "You've entered something wrong !!" << endl;
                                                break;
                                        }
                                }
                                if (it == casts.size() - 1) cout << "You've entered something wrong !!" << endl;
                        }


                        break;
                case 2:

                        for (int it = 0; it < casts.size(); it++)
                                for (int i = 0; i < viewers[num].getmystar().size(); i++)
                                        if (viewers[num].getmystar()[i] == casts[it].getname()) cout << casts[it].getname() << ' ' << casts[it].getage() << ' ' << casts[it].getEntertainment() << endl;
                        break;
                case 3:
                        out = 1;
                }

        }
}
void vector_viewer::showmy_star() {

}
