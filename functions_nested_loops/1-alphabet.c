#include "main.h"

/**
 * main - This code  function that prints the alphabet, in lowercase.
 *
 * Return: 0.
 */

int print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);

	_putchar('\n');

	return (0);
}
