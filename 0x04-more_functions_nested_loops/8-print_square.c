#include "main.h"

/**
 * print_square - prints a square,
 * @size: The number of squares/number of times
 * use _putchar function to print
 * Use the character # to print the square
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
