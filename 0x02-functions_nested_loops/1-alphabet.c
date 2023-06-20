#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char meow = 'a';

	while (meow <= 'z')
	{
		_putchar(meow);
		meow++;
	}
	_putchar('\n');
}
