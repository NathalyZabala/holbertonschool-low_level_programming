#include "main.h"

/**
 * *_strncpy - function that copies a string.
 *
 * @dest: destination
 * @src: source
 * @n: n characters
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len] = src[i];

	return (dest);
}
