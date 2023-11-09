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
	int src_len = 0;
	int i = 0;

	while (src[src_len])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
