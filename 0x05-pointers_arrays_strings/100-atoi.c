#include "main.h"
#include <stdio.h>

/**
  * _atoi -  convert a string to an integer
  * @s: string to be converted
  * Return: converted string as an int
  */

int _atoi(char *s)
{
	int numDigits = 0;
	int numSigns = 0;
	int result = 0;
	int hasNumber = 0;
	int isNegative = 0;
	int i = 0;

	while (s[numDigits] != '\0')
	{
		if (s[numDigits] >= '0' && s[numDigits] <= '9')
			hasNumber = 1;
		else if (s[numDigits] == '-')
		{
			numSigns++;
			isNegative = 1;
		}
		else if (s[numDigits] != '+')
			break;
		numDigits++;
	}
		if (!hasNumber || numSigns > 1)
			return (0);
	while (i < numDigits)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = (result * 10) + (s[i] - '0');
			i++;
		}
		else
			break;
	}

	return (isNegative ? -result : result);
}
