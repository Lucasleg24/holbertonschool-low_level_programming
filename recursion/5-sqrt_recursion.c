#include "main.h"

/**
 * increment - value of i
 * @i: value variable
 * @n: variable
 * Return: result
 */
int increment(int n, int i)
{

	if (n < i * i)
	{
		return (-1);
	}
	if (n == i * i)
	{
		return (i);
	}
		return (increment(n, i + 1));
}

/**
 * _sqrt_recursion - function
 * @n: variable
 * Return: value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return(-1);
	}

	return (increment(n, 0));
}
