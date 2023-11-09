#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: bytes from src to dest
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
