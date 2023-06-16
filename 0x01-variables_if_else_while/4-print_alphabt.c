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
	{
		if (meow != 'q' && meow != 'e')
		putchar(meow);
	}
	putchar('\n');

	return (0);
}
