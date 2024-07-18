#include "variadic_functions"

/**
 * print_int - print an int
 * Return: void
 */

void print_int(void)
{
	printf("%d");
}

/**
 * print_char - print a char
 * Return: void
 */

void print_char(void)
{
	printf("%c");
}

/**
 *  print_string - print a string
 *  Return: void
 */

void print_string(void)
{
	printf("%s");
}

/**
 * print_float - print a float
 * Return: void
 */

void print_float(void)
{
	printf("%f");
}

/**
 * print_all - print the result
 * @format: check the format
 * Return: return void
 */

void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	char *p = 0;

	while (format[p] != NULL)
	{
		if (format[p] == 'c' || format[p] == 'i' || format[p] == 'f' || format[p] == 's')
