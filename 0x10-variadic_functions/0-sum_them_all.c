#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sums
 * @n: number of arguments passed
 * Return: result sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sums = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sums += va_arg(list, int);

	va_end(list);

	return (sums);
}
