#include "variadic_functions.h"

/**
 * print_strings - prints all char
 * @separator: print separator
 * @n: size of char
 * Return: return void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	const char *t;

	va_start(list, n);
	while (i < n)
	{
		t = va_arg(list, const char*);
		if (t == NULL)
			printf("(nil)");
		else
			printf("%s", t);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

		i++;
	}
	va_end(list);
	printf("\n");
}
