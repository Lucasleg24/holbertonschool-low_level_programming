#include "main.h"

/**
 * _pow_recursion - power of variable
 * @x: variable 1
 * @y: variable 2
 * Return: return value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
