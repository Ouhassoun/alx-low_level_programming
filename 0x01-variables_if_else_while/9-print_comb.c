#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0 if succeeded
 */

int main(void)
{
	int nb;

	for (nb = 0; nb <= 9; nb++)
	{
		putchar((nb % 10) + '0');
		if (nb == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
