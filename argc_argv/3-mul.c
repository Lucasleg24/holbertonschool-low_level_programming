#include <stdio.h>
#include <stdlib.h>

/**
 * main - functions mul argument
 * @argc: numbers arguments
 * @argv: list of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
