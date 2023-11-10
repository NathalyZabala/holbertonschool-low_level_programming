#include "main.h"

/**
 * *_strpbrk -  function that searches a string for any of a set of bytes.
 *
 * @s: source  string
 * @accept: dest string
 *
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	i = 0;

	for (; s[i] != '\0'; i++)
	{
		n = 0;

		for (; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
