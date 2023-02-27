#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: the string char s in reverse
 */
void rev_string(char *s)
{
	int length, x, y;

	char rev1, rev2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	x = length - 1;
	y = 0;

	while (x > y)
	{
		rev1 = s[y];
		rev2 = s[x];
		s[y] = rev2;
		s[x] = rev1;
		x--;
		y++;
	}
}
