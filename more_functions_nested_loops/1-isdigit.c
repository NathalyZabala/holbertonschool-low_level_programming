#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for a digit (0 through 9).
 *
 * @c: is a digit.
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);

	return (0);
}
