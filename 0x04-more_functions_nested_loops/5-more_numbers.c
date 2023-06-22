#include "main.h"

/**
 * more_numbers - entry point
 * Description: Prints the numbers with _putchar
 * Return: void
 */

void more_numbers(void)
{
	int nb, row;

	for(row=0; row<10; row++)
	{
		for(nb=0; nb<=14; nb++)
		{
			_putchar(nb);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
