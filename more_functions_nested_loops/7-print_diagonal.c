#include "main.h"

/**
 * print_diagonal - unction that draws a diagonal line
 *
 * @n: data from user
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				/**
				 * space in ASCII
				 */
				_putchar(32);
			}
		/**
		 * \ in ASCII
		 */
			_putchar(92);
			_putchar('\n');
		}
	}
}
