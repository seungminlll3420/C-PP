#include "my_header.h"
using namespace std;
const char *pattern = "Happy families are all alike;";
int main() {
        FILE *file = fopen("input.txt", "r");
        cout << matching(pattern, file) << endl;
        fclose(file);
        return 0;
}
