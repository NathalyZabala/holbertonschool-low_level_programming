#include <stdio.h>

/**
 * main - this code prints all the numbers of base 16 in lowercase
 *
 * Return: 0.
 */

int main(void)
{
	char n;

	for (n = 0; n <= 15; n++) {
		if (n > 10) 
		{
			putchar('0' + n);
		}
		else
		{
			putchar('a' + (n - 10));
		}
	}

	putchar('\n');

	return (0);
}
