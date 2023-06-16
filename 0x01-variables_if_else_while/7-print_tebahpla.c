#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0 if succeeded
 */

int main(void)
{
	char meow;

	for (meow = 'z'; meow >= 'a'; meow--)
		putchar(meow);

	putchar('\n');

	return (0);
}
