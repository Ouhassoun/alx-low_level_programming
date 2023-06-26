#include "main.h"
#include <stdio.h>

/**
  * _atoi -  convert a string to an integer
  * @s: string to be converted
  * Return: converted string as an int
  */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '+' || *s == '-')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		result = ((result * 10) + (sign * digit));
		s++;
	}

	return (result);
}
