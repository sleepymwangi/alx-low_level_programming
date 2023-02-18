#include <stdio.h>

/**
 * main - Entry and initialization
 * Description: single digit number
 * Return: 0 succession
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
