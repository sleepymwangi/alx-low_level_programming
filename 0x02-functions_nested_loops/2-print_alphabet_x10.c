#include "main.h"

/**
 * print_alphabet_x10 - function
 *
 * void - Entries
 *
 * prints alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x;
	char c;

	for (x = 0; x < 10; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
