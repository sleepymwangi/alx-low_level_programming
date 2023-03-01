#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0';  y++)
	{
		if (dest[x] == src[y])
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
