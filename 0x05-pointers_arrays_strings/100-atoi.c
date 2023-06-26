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
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '+' || s[i] == '-')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && digit > (INT_MAX % 10)))
		{
			return ((sign == -1) ? INT_MIN : INT_MAX);
		}

		result = (result * 10) + digit;
		i++;
	}

	return (sign * result);
}
