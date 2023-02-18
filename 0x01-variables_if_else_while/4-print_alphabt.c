#include <stdio.h>

/**
 * main - initialization Entry
 * Description: exclude alphabets
 * Return: 0 succession
 */
int main(void)
{
	char eq;

	for (eq = 'a'; eq <= 'z'; eq++)
	{
	if (eq != 'e' || eq != 'q')
		putchar(eq);
	}
	putchar('\n');
	return (0);
}
