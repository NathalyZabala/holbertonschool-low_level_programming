#include <stdio.h>

/**
 * main - this code Write a program that prints the alphabet in lowercase
 * but q and e
 *
 * Return: 0.
 */

int main(void)
{
	char n;

	for (n ='a'; n <= 'z'; n++) {
		if ( n != 'q' && n != 'e')
		putchar(n);
	}
	
	putchar ('\n');

	return (0);	
}
