#include "main.h"

/**
 * puts_half - function that prints the second half of a string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}


	if (len % 2 == 1)
	{
		i = (len - 1) / 2;
		i += 1;
	}
	else
	{
		i = len / 2;
	}

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
