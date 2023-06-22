#include "main.h"

/**
 * _isupper - define if a character is uppercase
 * Description: define upper or lower case character
 * @c: charater
 * Return: 1 if uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
