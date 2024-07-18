#include "variadic_functions.h"

/**
 * print_int - print an int
 * Return: void
 */

void print_int(void)
{
	printf("Print integer");
}

/**
 * print_char - print a char
 * Return: void
 */

void print_char(void)
{
	printf("Print char");
}

/**
 *  print_string - print a string
 *  Return: void
 */

void print_string(void)
{
	printf("Print string");
}

/**
 * print_float - print a float
 * Return: void
 */

void print_float(void)
{
	printf("Print float");
}

/**
 * print_all - print the result
 * @format: check the format
 * Return: return void
 */

void print_all(const char * const format, ...)
{
	int p = 0;
	int o = 0;
	va_list org;

	formule list[] = {
		{"c", print_char}
		{"i", print_int}
		{"s", print_string}
		{"f", print_float}
		{NULL, NULL}
	};

	va_start(va_list)
	while (format[o] != '\0')
	{
		if (format[o] == 'c' || format[o] == 'i' ||
				format[o] == 'f' || format[o] == 's')
		{
			while (list[p].check != NULL)
			{
				if (list[p].check == format[o])
				{
					list[p].f(va_list);
				}
				p++;
			}
		}
		o++;
	}
	va_end(org);
}
