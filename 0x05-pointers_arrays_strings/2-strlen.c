#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int x;
	int length = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		length++;
	}
	return (length);
}

