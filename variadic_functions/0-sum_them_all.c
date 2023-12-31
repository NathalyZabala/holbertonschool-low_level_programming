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
	va_list args;

	unsigned int i = 0;
	int result = 0;

	if (n != 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			result += va_arg(args, int);
		}

		va_end(args);

		return (result);
	}

	return (0);
}
