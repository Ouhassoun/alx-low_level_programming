#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int current, previous, next;
	unsigned long int current1, current2, previous1, previous2;
	unsigned long int next1, next2;

    	previous = 1;
    	current = 2;

	printf("%lu", previous);

	unsigned int i;

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", current);
		next = current + previous;
		previous = current;
		current = next;
	}

	previous1 = previous / 1000000000;
	previous2 = previous % 1000000000;
	current1 = current / 1000000000;
	current2 = current % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", current1 + (current2 / 1000000000));
		printf("%lu", current2 % 1000000000);
		previous1 = previous1 + current1;
		current1 = previous1 - current1;
		current2 = current2 + previous2;
		previous2 = current2 - previous2;
	}

	printf("\n");

	return (0);
}
