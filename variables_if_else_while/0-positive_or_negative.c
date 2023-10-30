#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function assign a random number to the variable n each time it is executed
 *
 * Return: 0, exit
 */

int main(void)
{
	int n;

	srand(time(0));
	n =  rand() - RAND_MAX / 2;
	if(n > 0) {
		printf("%zu is positive\n");
	}else if(n == 0) {
		printf("%zu is zero\n");
	}else {
		printf("%zu is negative\n");
	}
	return (0);
}
