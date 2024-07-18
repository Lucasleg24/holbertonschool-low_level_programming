#include "variadic_functions.h"

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
	int p = 0;

	formule list[] = {
		{"c", print_char}
		{"i", print_int}
		{"s", print_string}
		{"f", print_float}
		{NULL, NULL}
	};

	while (list[p].check != NULL)
	{
		if (list[p].check == 'c' || list[p].check == 'i' || list[p].check == 'f' || list[p].check == 's')
		{
			list[p].f;
		}
	p++;
	}
}
