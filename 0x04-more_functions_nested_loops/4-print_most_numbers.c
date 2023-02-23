#include "main.h"

/**
 * print_most_numbers - prints most numbers
 * @2 - not to be printed
 * @4 - not to be printed
 * new line.
 * use _putchar twice in your code
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 10; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}
