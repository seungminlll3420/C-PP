
#include <string.h>
#include "my_header.h"
using namespace std;

unsigned int matching(const char* pattern, FILE *file){
        char *text = new char[100];
        char *text2 = new char[100];
        int length = strlen(pattern);
        int result = 0;
        int i;
        while(true) {
                if(fgets(text,100,file) == NULL) break;

                if(i = strstr(text, pattern)!=NULL) {
                        result++;
                        i += length;
                        strncpy(text,text2,i);
                        if(strstr(text2, pattern)!=NULL) result++;

                }


        }
        return result;
}
