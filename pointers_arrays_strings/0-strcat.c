#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	while (dest[dest_len])
		dest_len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}

	dest[dest_len] = '\0';
	return (dest);
}
