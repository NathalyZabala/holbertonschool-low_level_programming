#include <stdio.h>

/**
 * main - this code prints all the numbers of base 16 in lowercase
 *
 * Return: 0.
 */

int main(void)
{
	/**
	 * n represents numbers from 0 to 9
	 * m represents letters from a to f
	 */
	char n, m;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);

	putchar('\n');

	return (0);
}
