#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0 if succeeded
 */

int main(void)
{
	int nb1, nb2;

	for (nb1 = 0; nb1 < 9; nb1++)
	{
		for (nb2 = nb1 + 1; nb2 < 10; nb2++)
		{
			putchar((nb1 % 10) + '0');
			putchar((nb2 % 10) + '0');

			if (nb1 == 8 && nb2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
