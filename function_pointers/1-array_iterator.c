#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - create array with function
 * @array: array of value
 * @size: size of array
 * @action: function
 * Return: always void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (size <= 0)
		return;
	if (array == 0)
		return;
	if (action == 0)
		return;

	while (i < size)
	{
		action(*array);
		i++;
		array++;
	}
}
