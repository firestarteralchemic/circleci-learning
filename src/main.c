
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
	srand(time(0));

	printf("hello world!\n");
	printf("your lucky number today is: %d!\n", rand());
	return 0;
}


