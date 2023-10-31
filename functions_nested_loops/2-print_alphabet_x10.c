#include "main.h"

/**
 * print_alphabet_x10 - This function prints 10 times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char n;

	do {
		for (n = 'a';n <= 'z';n++)
			_putchar(n);
	} while (n < 10);

	_putchar('\n');
}
