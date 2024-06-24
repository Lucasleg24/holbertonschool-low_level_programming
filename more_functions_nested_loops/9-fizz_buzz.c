#include <stdio.h>

/**
 * main - print all numbers
 *
 * Return: always 0
 */

int main(void)
{
	int i, m3, m5;

	for (i = 1; i <= 100; i++)
	{
		m3 = i % 3;
		m5 = i % 5;

		if (m3 == 0 && m5 == 0)
			printf("FizzBuzz");

		else if (m5 == 0)
			printf("Buzz");

		else if (m3 == 0)
			printf("Fizz");

		else
			printf("%d", i);

		{
		if (i != 100)
		printf(" ");
		}

	}
	putchar('\n');

	return (0);
}
