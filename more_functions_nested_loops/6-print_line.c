#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: data from user
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			/**
			 * ASCII de _
			 */
			_putchar(95);
		}
	_putchar('\n');
	}

}
