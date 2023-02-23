#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * should be followed by new line
 * you can only use _putchar twice in your code
 * Return: void.
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
