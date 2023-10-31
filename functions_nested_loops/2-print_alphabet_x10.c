#include "main.h"

/**
 * print_alphabet_x10 - This function prints 10 times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	/**
	 * n representa la cantidad de veces que se va a repetir el ciclo
	 * m representa la iteración del alfabeto
	 */
	char n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		       _putchar(n);	
	}

	_putchar('\n');
}
