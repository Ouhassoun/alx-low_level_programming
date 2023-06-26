#include "main.h"
#include <stdio.h>

/**
  * rev_string - Reverses a string
  * @s: fonction's parameter
  * Return: void
  */

void rev_string(char *s)
{
	int length = strlen(s);
	int i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
