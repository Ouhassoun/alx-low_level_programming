#include "main.h"

/**
 * print_most_numbers - Prints the numbers with _putchar
 * Description: Prints the numbers with _putchar
 * Return: void
 */

void print_most_numbers(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		if (nb != '2' || nb != '4')
		{
			_putchar(nb);
		}
	}
	_putchar('\n');
}
