#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2 followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int fib1 = 1;
	long int fib2 = 2;
	int i;

	for (int i = 3; i <= 50; ++i)
	{
		unsigned long long fib = fib1 + fib2;
		printf(", %ld", fib);
		fib1 = fib2;
		fib2 = fib;
	}

	return (0);
}
