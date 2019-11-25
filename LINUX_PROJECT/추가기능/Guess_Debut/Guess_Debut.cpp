#include "Guess_Debut.h"

void guess_debut(vector<cast> casts,vector<cast> my_star){
        string names[3];
        string name;
        int j =0;
        int out = 0;
        int key=0;
        string keystr;
        cout << " ====== Pick 3 stars! ====== " << endl << "!! Once selected star cannot be changed. !!" << endl;
        while(out != 1) {
                cout << " 1: Registering Your Star 2: See your own star 3: Go to the previous screen. " << endl
                        cin >> key;

                switch(key) {
                case 1:
                        if(j == 3) {
                                cout << "All already registered !!" <<endl;
                                break;
                        }
                        cin >> name;
                        for (int it = 0; it < casts.size(); it++) {
                                if (casts[it].getname() == name) {
                                        cout << "Should I register " << name <<"? (y or n) " <<endl;
                                        cin >> keystr;
                                        if(keystr == 'y' || keystr == 'Y') {
                                                cout << "Registered!!" <<endl;
                                                my_star.push_back(name);
                                                names[j++] = name;

                                        }else if(keystr == 'n' || keystr == 'N') {
                                                cout << "Please choose someone else!!" <<endl;

                                        }else{
                                                cout << "You've entered something wrong !!" << endl;
                                        }
                                }else{
                                        cout << "You've entered something wrong !!" << endl;
                                }
                        }
                        break;
                case 2:
                        for (int it = 0; it < casts.size(); it++)
                                for(int i = 0; i < j; i++)
                                        if(names[i] == casts[it].getname()) cout << casts[it].getname() << ' ' << casts[it].getage() << ' ' << casts[it].getEntertainment() << endl;
                        break;
                case 3:
                        out = 1;
                }

        }
}
