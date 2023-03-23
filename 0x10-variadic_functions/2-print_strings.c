#include "variadic_functions.h"
/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	while (i < n)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
