#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: char
 *@src: char
 *@n: int
 *
 *Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	while (r < i)
	{
		dest[r] = src[r];
		n--;
		r++;
	}
	return (dest);
}
