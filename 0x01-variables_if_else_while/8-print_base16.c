#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char meow;

	for (meow = '0'; meow <= '9'; meow++)
	{
		putchar(meow);
	}
	for (meow = 'a'; meow <= 'f'; meow++)
	{
		putchar(meow);
	}

	putchar('\n');

	return (0);
}
