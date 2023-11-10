#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: input
 * @accept: input
 *
 * Return: value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	i = 0;
	value = 0;
	check = 0;
	n = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}

		if (check == 0)
			return (value);
	}

	return (value);

}
