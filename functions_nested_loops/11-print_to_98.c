#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Write a function that prints all natural numbers from n to 98
 *
 * @n: number 
 *
 * Return: 0
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n);
		_putchar(44);
		_putchar(32);
	}
}
