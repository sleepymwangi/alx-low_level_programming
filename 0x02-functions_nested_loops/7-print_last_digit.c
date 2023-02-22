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

	int a = -(n % 10);

	_putchar(a + '0');
	return (0);
}
