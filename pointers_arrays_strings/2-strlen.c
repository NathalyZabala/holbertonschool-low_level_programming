#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: string
 *
 * Return: 0
 */

int _strlen(char *s)
{
	size_t lenght = 0;

	while (*s++)
	{
		lenght++;
	}
	return (lenght);
}
