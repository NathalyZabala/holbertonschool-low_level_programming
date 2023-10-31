#include <stdio.h>

/**
 * main - this code prints all single digit numbers of base 10 starting from 0
 * but in this case no ussing char
 *
 * Return: 0.
 */

int main(void)
{
	int n;

	for (n = 0; n <=9; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
