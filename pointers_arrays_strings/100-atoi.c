#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: the pointer to convert
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int integer = 0;
	int sign = 1;
	int digit = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}

		while ((s[i] >= 48) && (s[i] <= 57))
		{
			digit = 1;
			integer = (integer * 10) + (s[i] - '0');
			i++;
		}

		if (digit == 1)
		{
			break;
		}
		i++;
	}
	integer *= sign;
	return (integer);
}
