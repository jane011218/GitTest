// Make conflict
 #include <stdio.h>
=======
// testbranch
#include <stdio.h>
>>>>>>> testbranch
#include "myheader.h"

int main(void) {
	char name[17] = {0,};

	printf("Name: ");
	scanf("%s", name);

	printHello();
	printBye();

	return 0;
}
