#include <stdio.h>

/**
 * main - this code prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0.
 */

int main(void)
{
	char n;
	char m;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);

	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);

	putchar('\n');

	return (0);
}
