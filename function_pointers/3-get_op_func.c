#include "3-calc.h"

/**
 * get_op_func - choice the function
 * @s: variable test
 * Return: return the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (*op_t->op[i] != NULL)
	{
		if (*op_t->op[i] == *s)
		{
			return (op_t->f[i]);
		}
		i++;
	}
	return (NULL);
}
