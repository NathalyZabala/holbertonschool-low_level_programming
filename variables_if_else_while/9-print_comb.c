#include <stdio.h>

/**
 * main - this code prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	char n;

	while (n <= 9)
	{
		/**
		 * sumar 0 al valor de x convierte el valor numerico en en
		 * el caracter correspondiente
		 */
		putchar(n + '0');

		if (x <= 8)
		{
			putchar(',');
			putchar(' ');
		}

		x++;

	}

	return (0);
}
