#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0 if succeeded
 */

int main(void)
{
	char meow;

	for (meow = 'a'; meow <= 'z'; meow++)
		putchar(meow);

	for (meow = 'A'; meow <= 'Z'; meow++)
		putchar(meow);

	putchar('\n');

	return (0);
}
