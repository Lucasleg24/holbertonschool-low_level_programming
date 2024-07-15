#include "function_pointers.h"

/**
 * int_index - index value
 * @array: array of value
 * @size: size of array
 * @cmp: function for int_index
 * Return: 0, -1 or result
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		result = cmp(*array);
		if (result != 0)
			break;
		i++;
		array++;
	}
	return (i);
}
