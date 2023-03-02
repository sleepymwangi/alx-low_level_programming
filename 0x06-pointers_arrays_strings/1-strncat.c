#include "main.h"

/**
 * _strncat - function that uses n bytes from string src returning dest.
 * @n: the size of bytes to be used.
 * @src: the string to be concatenated.
 * @dest: the string to be returned.
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
