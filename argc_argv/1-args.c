#include <stdio.h>

/**
 * main - count argc
 * @argc: all parameter
 * @argv: listing parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; argv[count]; count++)
	{
	}
	printf("%d\n", count)
