#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if succeeded
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
