#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
