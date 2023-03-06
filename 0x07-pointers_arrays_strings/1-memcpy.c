#include "main.h"

/**
 * _memcpy-copies n characters from memory area src to memory area dest.
 * @dest: pointer to char parameters
 * @src: pointer to char parameters
 * @n: size
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
