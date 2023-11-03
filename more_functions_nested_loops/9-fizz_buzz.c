#include <stdio.h>
#include "main.h"

/**
 * main - FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (n % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			_putchar("%d", n);
		}
		if (n != 100)
		{
			_putchar(32);
		}
	}
	_putchar('\n');
	return (0);
}
