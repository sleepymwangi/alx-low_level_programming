#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - prints all possible different combinations of two digits
 * Return: 0 succession
 */
int main(void)
{
	int n;
	int x = 0;

	while (x < 10)
	{
		n = 0;
		while (n < 10)
		{
			if (x != n && x < n)
			{
				putchar('0' + x);
				putchar('0' + n);
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
