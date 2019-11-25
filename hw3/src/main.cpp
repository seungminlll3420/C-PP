#include "my_printlog.h"
#include "my_square.h"

#include <stdlib.h>


int main(int argc, char *argv[]){
	int square = my_sq(atoi(argv[1]));
	my_printlog(square);

	return 0;
}
