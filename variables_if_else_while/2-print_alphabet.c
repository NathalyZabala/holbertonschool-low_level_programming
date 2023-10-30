#include <stdio.h>

/**
 * main - this code prints the alphabet in lowercase ussing putchar
 *
 * putchar prints just one character
 *
 * Return: 0
 */

int main(void)
{
	/**
	 * n is the alphabet letter
	 *
	 * for bucle goes through the aplhabet letters
	 */
	char n;
	for (n = 'a'; n <= 'z'; n++)
		putchar(n);

	putchar('\n')

	return (0);
}
