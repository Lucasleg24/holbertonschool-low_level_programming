#include "main.h"

/**
 * increment - fonction value
 * @n: value variable
 * @i: variable count
 * Return: 0 or 1
 */

int increment(int n, int i)
{
	if (n % i != 0 && i == 9)
	{
		return (1);
	}
	if (n % i == 0 && i != 1 && i != n)
	{
		return (0);
	}

	return (increment(n, i + 1));

}

/**
 * is_prime_number - fonction 2
 * @n: variable
 * Return: 0 or 1
 */


int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}

	return (increment(n, 0));
}
