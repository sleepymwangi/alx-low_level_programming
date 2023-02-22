#include "main.h"

/**
 * print_last_digit - function that prints last digit
 * @n: the integer to remove the last digit
 * @x - digit
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	n = -n;

	if (n == -n)
	{
		int x = -n;

		x = n % 10;
		_putchar(x + '0');
	}
	return (0);
}
