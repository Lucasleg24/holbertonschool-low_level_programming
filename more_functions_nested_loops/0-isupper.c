#include "main.h"

/**
 * _isupper - check all _upper caracter
 * @c: variable
 * Return: return 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
