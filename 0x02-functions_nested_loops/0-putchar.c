#include "main.h"

/**
 * main - Entries
 * should be followed by newline '\n'
 * The program should return 0
 * Return: 0 succession
 *
 */
int main(void)
{
	char paul[] = "_putchar";

	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(paul[x]);
	}
	_putchar('\n');
	return (0);
}
