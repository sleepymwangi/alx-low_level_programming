#include "variadic_functions.h"

/**
 * sum_them_all - adds all numbers up.
 * @n: number of params
 * Return: 0 succession
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);

	return (sum);
}
