#include <stdio.h>

/**
 * main - Entries
 * Descriptions: Hexadecimal
 * Return: 0 succession
 */
int main(void)
{
	char y;
	int x;

	for (x = 4; x <= 14; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}

