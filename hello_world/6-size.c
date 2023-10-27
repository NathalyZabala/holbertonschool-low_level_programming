/**
 * main - name of the function, prints a text
 *
 * this function prints the size of varous types
 *
 * Return: Always 0. Exit
 */
#include <stdio.h>

int main(void)
{
	printf("Size of a char: 1 byte(s)\n", sizeof (char));
	printf("Size of an int: 4 byte(s)\n", sizeof (int));
	printf("Size of a long int: 4 byte(s)\n", sizeof (long int));
	printf("Size of a long long int: 8 byte(s)\n", sizeof (long long int));
	printf("Size of a float: 4 byte(s)\n", sizeof (float));
	return (0);
}
