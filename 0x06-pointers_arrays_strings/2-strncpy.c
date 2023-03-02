#include "main.h"

/**
 * _strncpy - the functions copies the first character of,
 * the string src to the string dest
 * @n: is the character of the string src
 * @src: the string to be concatenated to dest
 * @dest: the string to be resturned.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	for (; y < n; y++)
	dest[y] = '\0';
	return (dest);
}
