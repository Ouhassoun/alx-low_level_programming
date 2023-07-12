#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: char
 * @s2: char
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *merged;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	merged = malloc(sizeof(char) * (i + ci + 1));

	if (merged == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		merged[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		merged[i] = s2[ci];
		i++, ci++;
	}
	merged[i] = '\0';
	return (merged);
}
