#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 * Return: the enconde string.
 */
char *leet(char *s)
{
	char letters[] = "oOlLeEaAtT";
	char digits[] = "0011334477";
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; letters[y] != '\0'; y++)
		{
			if (s[x] == letters[y])
			{
				s[x] = digits[y];
				break;
			}
		}
	}
	return (s);
}

