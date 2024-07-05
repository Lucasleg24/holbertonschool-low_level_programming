#include <stdio.h>

/**
 * main - count argc
 * @argc: all parameter
 * @argv: listing parameter
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
