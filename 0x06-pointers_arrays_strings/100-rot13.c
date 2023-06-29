#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: String conversion
 */

char *rot13(char *s)
{
	int j, i = 0;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[j] != '\0')
	{
		i = 0;
		while (letters[i] != '\0')
		{
			if (s[j] == letters[i])
			{
				s[j] = rot13[i];
				break;
			}
			i++;
		}
		j++;
	}
	return (s);
}
