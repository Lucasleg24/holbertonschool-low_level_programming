#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints "value of n depending on the variable"
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
{
		printf("is negative\n");
}
	if (n == 0)
{
		printf("is zero\n");
}
	if (n > 0)
{
		printf("is positive\n");
}
	return (0);
}
