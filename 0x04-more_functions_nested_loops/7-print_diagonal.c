#include "main.h"

/**
 * print_diagonal - entry point
 * Description: Prints diagonals
 * @n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int row, nb_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (nb_lines = 1; nb_lines <= row - 1; nb_lines++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
