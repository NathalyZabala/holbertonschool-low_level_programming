#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: input
 * @accept: input
 *
 * Return: len
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, len, check;

	i = 0;
	len = 0;

	for (; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				len++;
				check = 1;
			}
		}

		if (check == 0)
			return (len);
	}

	return (len);

}
