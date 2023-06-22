#include "main.h"

/**
 * print_line - entry point
 *
 * Description: Prints lines
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int nb_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (nb_lines = 1; nb_lines <= n; nb_lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
