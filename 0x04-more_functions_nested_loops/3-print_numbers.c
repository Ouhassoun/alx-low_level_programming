#include "main.h"

/**
 * print_numbers - Prints the numbers with _putchar
 * Description: Prints the numbers with _putchar
 * Return: void
 */

void print_numbers(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		_putchar(nb);
	}
	_putchar('\n');
}
