#include "main.h"
#include <stdio.h>

/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: string
 */

void rev_string(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		_putchar(*s++);
	}

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
