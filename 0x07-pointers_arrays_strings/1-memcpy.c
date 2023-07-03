#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: char
 *@src: char
 *@n: int
 *Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
