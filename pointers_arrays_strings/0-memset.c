#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 *
 * @s: pointer to memory area to fill
 * @b: constant byte
 * @n: the number of bytes to fill
 * @i: index
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return (s);
}
