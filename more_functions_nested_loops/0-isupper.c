#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character.
 *
 * @c: character
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
