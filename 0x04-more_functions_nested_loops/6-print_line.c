#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * use _putchar function to print
 * @n: is the number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
