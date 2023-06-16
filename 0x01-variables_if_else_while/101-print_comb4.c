#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0 if succeeded
 */
int main(void)
{
	int nb1, nb2, nb3;

	for (nb1 = 0; nb1 < 8; nb1++)
	{
		for (nb2 = nb1 + 1; nb2 < 9; nb2++)
		{
			for (nb3 = nb2 + 1; nb3 < 10; nb3++)
			{
				putchar((nb1 % 10) + '0');
				putchar((nb2 % 10) + '0');
				putchar((nb3 % 10) + '0');

				if (nb1 == 7 && nb2 == 8 && nb3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
