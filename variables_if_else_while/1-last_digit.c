#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this code assign a random number to the variable n each time it is
 * executed and prints the last digit
 *
 * Return: 0
 */

int main(void)
{
	/**
	 * m: the last digit
	 */
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/**
	 * if I divide the number given to me by 10, the remainder is always
	 * the last number.
	 */
	m = n % 10;

	printf("Last digit of %d is %d ", n, m);

	if (m > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (m == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
