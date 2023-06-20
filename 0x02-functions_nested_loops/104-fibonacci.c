#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: ALways 0 (Success)
 */

int main(void)
{
	unsigned int nb1 = 1;
	unsigned int nb2 = 2;
	unsigned int nb;
	int i;

	for (i = 1; i <= 98; ++i)
	{
		nb = nb1 + nb2;

		printf(", %u", nb);

		nb1 = nb2;
		nb2 = nb;
	}

	printf("\n");

	return (0);
}
