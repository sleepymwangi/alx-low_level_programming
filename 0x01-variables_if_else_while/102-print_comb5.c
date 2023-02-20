#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entries and intilization
 * Descripitions: The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * You can only use putchar eight times maximum in your code
 * Return: 0 succession
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = x; y <= 99; y++)
		{
			if (y != x)
			{
				putchar(x / 10 + 48);
				putchar(x % 10 + 48);
				putchar(' ');
				putchar(y / 10 + 48);
				putchar(y % 10 + 48);

				if (x * 100 + y != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
