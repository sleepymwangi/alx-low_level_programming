#include <stdio.h>

/**
 * main - Entries
 * Descriptions: special characters
 * Return: 0 succesion
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	        if (n != 9)
	        {
		putchar(',');
		putchar(' ');
	        }
	}
	putchar('\n');
	return (0);

}
