#include "variadic_functions"

/**
 *
 */

void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	char *p;

	while (format[p] != NULL)
	{
		if (format[p] == c || format[p] == i || format[p] == f || format[p] == s)

