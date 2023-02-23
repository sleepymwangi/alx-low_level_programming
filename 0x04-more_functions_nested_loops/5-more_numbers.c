#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14,followed by a new line.
 * use _putchar three times in your code
 * Return: void
 */
void more_numbers(void)
{
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 15; y++)
		{
			if (y >= 10)
				_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
