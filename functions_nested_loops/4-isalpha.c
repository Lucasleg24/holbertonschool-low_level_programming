#include "main.h"

/**
 * _isalpha - print alphabet
 * @c: caracter to be verified
 *Return: return 0 or 1
 */

int _isalpha(int c)
{
	if (c <= 65 && c <= 90)
		return (1);
	else if (c <= 97 && c <= 122)
		return (1);
	else
		return (0);
}
