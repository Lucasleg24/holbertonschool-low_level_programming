#include <stdio.h>

/**
 * main - fonction print name
 * @argc: number argument
 * @argv: array of argument
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
	{
		printf("argv[%d] = %s\n", count, argv[count]);
	}
	}
	else
	{
		return (0);
	}

	return (0);
}