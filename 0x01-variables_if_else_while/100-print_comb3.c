#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * Description: Numbers must be separated by ,followed by space
 * The two digits must be different
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return:0 succession
 */
int main(void)
{
	int n;
	int x = 10;

	while (x < 10)
	{
		n = 10;
		while (n < 10)
		{
			if (x != n && x < n)
			{
				putchar(x + '0');
				putchar(n + '0');

				if (n + x != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}

