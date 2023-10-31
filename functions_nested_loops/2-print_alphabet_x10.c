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
	int n, m;

	for (m = 0; m <= 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		       _putchar(n);
	
		_putchar('\n');
	}
}
