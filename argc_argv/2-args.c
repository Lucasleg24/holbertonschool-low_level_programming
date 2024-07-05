#include <stdio.h>

/**
 * main - fonction print all argument value
 * @argc: number of argument
 * @argv: listing argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
