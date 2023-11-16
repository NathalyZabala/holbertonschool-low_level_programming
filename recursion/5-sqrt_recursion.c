#include "main.h"

/**
 * _sqrt - square root
 *
 * @m: number
 * @n:number
 *
 * Return: 0
 */

int _sqrt(int m, int n)
{
	if (m * n > n)
		return (-1);

	if (m * n == n)
		return (m);

	return (_sqrt(m + 1, n);
}

/**
 * _sqrt_recursion - recursion
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(0, n)); 
}
