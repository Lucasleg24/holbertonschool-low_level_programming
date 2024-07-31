#include "main.h"

/**
 * binary_to_uint - convert binary number
 * @b: string with value binary
 * Return: return the binary number in decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);

		result = result * 2 + (b[count] - '0');
	}
	return (result);
}
