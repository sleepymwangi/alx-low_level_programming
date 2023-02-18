#include <stdio.h>

/**
 * main - Entries
 * Descriptions: Hexadecimal
 * Return: 0 succession
 */
int main(void)
{
	int x;
	char y;

	for (x= 0; x < 10; x++)
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

