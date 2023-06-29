#include "main.h"

/**
 * print_number - prints an integer
 * @n: function's parameter
 * Retrun: void
 */

void print_number(int n)
{
	int digit;

	int power = 1;

	int temp = n;

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

	while (temp > 9)
	{
		temp /= 10;
		power *= 10;
	}

	while (power > 0)
	{
		digit = n / power;
		_putchar('0' + digit);
		n %= power;
		power /= 10;
	}
}
