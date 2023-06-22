#include "main.h"

/**
 * _isdigit - define if a character is a number
 * Description: define if a character is a number
 * @c: fonction's parameter
 * Return: 1 if it's a number and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
