#include <stdio.h>

/**
 * main - Entry
 * Description: alphabet in reverse
 * Return: 0 succession
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
