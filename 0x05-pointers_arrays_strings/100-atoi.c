#include "main.h"
#include <stdio.h>

/**
  * _atoi -  convert a string to an integer
  * @s: string to be converted
  * Return: converted string as an int
  */

int _atoi(char *s)
{
	int i = 0;
	int numSigns = 0;
	int numDigits = 0;
	int hasNumber = 0;
	int result = 0;
	int digit = 0;

	while (s[numDigits] != '\0')
	{
		numDigits++;
	}
	while (i < numDigits && hasNumber == 0)
	{
		if (s[i] == '-')
			numSigns++;

	if (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
	if (numSigns % 2 != 0)
	{
		digit = -digit;
	}
	result = result * 10 + digit;
	hasNumber = 1;
	if (s[i + 1] < '0' || s[i + 1] > '9')
		break;
	hasNumber = 0;
	}
	i++;
	}
	if (hasNumber == 0)
		return (0);

	return (result);
}
