#include <string.h>
#include "my_header.h"
using namespace std;
unsigned int matching(const char* pattern, FILE *file) {
        char *text = new char[1000];
        int len = strlen(pattern) - 1;
        int result = 0;
        char *i;
        while (true) {
                if (fgets(text, 1000, file) == NULL) break;
                i = strstr(text, pattern);
                while (i != NULL) {
                        result++;
                        i += len;
                        i = strstr(i, pattern);
                }
        }
        return result;
}
