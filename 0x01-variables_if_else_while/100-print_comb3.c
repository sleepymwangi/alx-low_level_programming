#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * Description: Numbers must be separated by ,followed by space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
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
	int x;
	int n = 0;

	while (n < 10)
	{
		x = 0;
		while (x < 10)
		{
			if (x != n && x < n)
			{
				putchar('0' + x);
				putchar('0' + n);

				if (x + n != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			x++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
