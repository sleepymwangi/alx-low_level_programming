#include "main.h"

/**
  * print_triangle - Prints a triangle of squares according parameter
  * @size: The size of the squares triangle
  *
  * Return: empty
  */
void print_triangle(int size)
{
	int m, n, o;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			for (n = size - m; n > 1; n--)
			{
				_putchar(32);
			}
			for (o = 0; o <= m; o++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
