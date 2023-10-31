#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 *
 * @n: data from user.
 *
 * Return: 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0):
		_putchar('0');
	}
}
