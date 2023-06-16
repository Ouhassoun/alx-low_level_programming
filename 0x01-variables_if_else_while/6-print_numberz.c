#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0 if succeeded
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
