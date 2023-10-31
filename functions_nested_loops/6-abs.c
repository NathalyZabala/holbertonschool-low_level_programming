#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * Return: 0
 */

int _abs(int)
{
	int n;

	/**
	 * el valor abs de un número no considera su signo
	 * por lo que el else de esta función multiplica n por -1
	 * para convertirlo en negativo
	 */

	if (n > 0)
		return (n);
	else
		return ((n * -1));
}
