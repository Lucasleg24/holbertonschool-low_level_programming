#include "function_pointers.h"

/**
 * print_name - print the name
 * @name: variable
 * @f: function main
 * Return: always void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
		return;
	if (name == 0)
		return;
	f(name);
}
