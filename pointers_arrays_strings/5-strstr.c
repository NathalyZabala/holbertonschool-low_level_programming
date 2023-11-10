#include "main.h"

/**
 * *_strstr - function that locates a substring.
 *
 * @haystack: substring
 * @needle: string
 *
 * Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *character1 = haystack;
		char *character2 = needle;

		while (*character1 == *character2 && *character2 != '\0')
		{
			character1++;
			character2++;
		}

		if (*character2 == '\0')
			return (haystack);
	}

	return (NULL);
}
