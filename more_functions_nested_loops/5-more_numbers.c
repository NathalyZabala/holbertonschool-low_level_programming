#include "main.h"

/**
 */

void more_numbers(void)
{
	int i, j;
	int times = 10;

	for (j = 0; j < times; j++)
	{
		for (i = 0;i <= 14; i++)
			_putchar(i);
			_putchar('\n');
	}
	_putchar(j);
}
