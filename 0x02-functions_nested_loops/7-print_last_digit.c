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
	
	if ( c < 0)
	{
		c = -c;
		x = c % 10;
	}
	if (x < 0)
	{
		x = -x;
		_putchar('0' + x);
	}
	return (x);
	

