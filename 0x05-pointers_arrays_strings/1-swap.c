#include <stdio.h>

/**
* swap_int - swaps the values of two intergers
* @a: int variable
* @b: int variable
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
