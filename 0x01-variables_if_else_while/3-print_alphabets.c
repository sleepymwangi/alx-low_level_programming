#include <stdio.h>

/**
 * main - Entry
 * Description: lowercase uppercase
 * Return:0 succession
 */
int main(void)
{
	char Al;

	Al = 'a';
	for (Al = 'a'; Al <= 'z'; Al++)
	{
		putchar(Al);
	}
	Al = 'A';
	for (Al = 'A'; Al <= 'Z'; Al++)
	{
		putchar(Al);
	}
	putchar('\n');
	return (0);
}
