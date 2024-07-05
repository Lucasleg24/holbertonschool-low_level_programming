#include <stdio.h>
#include <stdlib.h>

/**
 * main - function add arguments
 * @argc: numbers arguments
 * @argv: value arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int add = 0;

	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		  if (!atoi(argv[i]))
                {
                        printf("Error\n");
                        return (1);
                }
		for (j = 0; j < argc; j++)
		{
		if (!atoi(argv[j]))
		{
			printf("Error\n");
			return (1);
		}
		}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
