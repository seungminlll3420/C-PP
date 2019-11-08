#include <iostream>
using namespace std;
#include <string>

int main(){

        cout << "Enter string >> ";
        string str;
        getline(cin, str, '\n');
        int i = 0;
        int a_num = 0;

        /* fined a_1
           while(str[i] != '\0'){
           if(str[i] == 'a')
             a_num++;
           i++;
           }*/
        /*fined a_2
           try {
           while(str.at(i) != '\0'){
            if(str.at(i) == 'a')
              a_num++;
            i++;
           }
           }catch ( exception &e ) {
           cout << "err" <<endl;
           };*/
        /* fined a_3
           while(1){

           i = str.find('a', i) ;
           i++;
           a_num++;
           if(str.find('a', i) == -1){
            break;
           }
           }*/

        cout << "There are " << a_num <<" letters a.";
}
