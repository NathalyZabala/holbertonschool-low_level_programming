#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 *
 * @array: pointer to an int array
 * @size: array's size
 * @action: pointer to function (int indica que la función apuntada
 * toma un entero como argumento)
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
