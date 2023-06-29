#include "main.h"

/**
 * print_number - prints an integer
 * @n: function's parameter
 * Retrun: void
 */

void print_number(int n)
{
	int digit;

	int divisor = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = n / divisor;
		_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}
