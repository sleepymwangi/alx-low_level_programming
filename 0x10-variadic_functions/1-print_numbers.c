#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with a newline.
 * @n: number of params
 * @separator: separator btwn two no.
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list is;

	va_start(is, n);
	if (separator == NULL)
		separator = "";

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(is, int));
		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(is);
}
