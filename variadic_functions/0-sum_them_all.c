#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: number
 * ...: indicates that it is a variadic function
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int result;
	result = 0;

	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	for (int i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);

	return (result);
}
