#include "main.h"

/**
 * print_last_digit - function that prints last digit
 * @c: the integer to remove the last digit
 * @x - digit
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
	int x;

	for (c = 0; c <= 98; c++)
	{
		x = c % 10;
		_putchar('0' + x);
	}
	_putchar('\n');
	return (0);
}
