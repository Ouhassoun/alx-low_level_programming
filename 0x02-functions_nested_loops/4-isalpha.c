#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: c is fonction's parameter
 * Return: 1 if c is a letter lowercase or uppercase, 0 othewise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
