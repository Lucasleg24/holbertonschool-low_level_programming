#include "main.h"

/**
 *
 *
 *
 */

int increment(int n, int i)
{
	if (n % i != 0 && i == 9)
	{
		return (1);
	}
	if ( n % i == 0 && i != 1 && i != n)
	{
		return (0);
	}

	return (increment(n, i + 1);

}

/**
 *
 *
 *
 */


int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}

	return (increment(n, 0));
}
