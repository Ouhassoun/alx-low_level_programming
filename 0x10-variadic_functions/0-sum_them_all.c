#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all its paramters
 * @n: unsigned int
 * @...: variable
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
