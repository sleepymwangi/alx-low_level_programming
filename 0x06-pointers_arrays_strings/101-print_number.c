#include "main.h"

/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int power;

	power = base10(8);
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
	_putchar('0');
	else
	{
		for (; power >= 1; power /= 10)
		{
			_putchar((n / power) + '0');
			n %= power;
		}
	}
}

