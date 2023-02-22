#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - rints all natural numbers from n to 98
 * @n: print from this number
 * Prototype: void print_to_98(int n);
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The last printed number should be 98
 * Return: 0 succession
 */
void print_to_98(int n)
{
	int x, y;

	if (n <= 98)
	{
		for (x = n; n <= 98; n++)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else if (x == 98)
			{
				printf("%d\n", x);
			}
		}
	}	else if (n >= 98)
		{
			for (y = n; y >= 98; y++)
			{
				if (y != 98)
				{
					printf("%d, ", y);
				}
				else if (y == 98)
				{
					printf("%d\n", y);
				}

			}

		}
}
