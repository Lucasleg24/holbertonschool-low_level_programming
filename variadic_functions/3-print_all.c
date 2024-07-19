#include "variadic_functions.h"

/**
 * print_int - print an int
 * @org: list of argument
 * Return: void
 */

void print_int(va_list org)
{
	int i = va_arg(org, int);

	printf("%d\n", i);

}

/**
 * print_char - print a char
 * @org: list of argument
 * Return: void
 */

void print_char(va_list org)
{
	char i = va_arg(org, char);

	printf("%c\n", i);

}

/**
 *  print_string - print a string
 *  @org: list of argument
 *  Return: void
 */

void print_string(va_list org)
{
	char *i = va_arg(org, char*);

	printf("%s\n", i);

}

/**
 * print_float - print a float
 * @org: list of argument
 * Return: void
 */

void print_float(va_list org)
{
	float i = va_arg(org, float);

	printf("%f\n", i);

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
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"f", print_float},
		{NULL, NULL}
	};

	va_start(org, format);
	while (format[o] != '\0')
	{
		if (format[o] == 'c' || format[o] == 'i' ||
				format[o] == 'f' || format[o] == 's')
		{
			while (list[p].check != NULL)
			{
				if (list[p].check == format[o])
				{
					list[p].f(org);
				}
				p++;
			}
		}
		o++;
	}
	va_end(org);
}
