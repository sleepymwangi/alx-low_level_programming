#include "main.h"

/**
 * _strcmp - function returns an integer,
 * indicating the result of the comparison
 * @s1: the string to be compared to s2.
 * @s2: the string to be compared to s1.
 * Return: comparison of s1 and s2.
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] == s2[x]; x++)
	{
		if (s1[x] == '\0' || s2[x] == '\0')
			break;
	}
	if (s1[x] == '\0' && s2[x] == '\0')
		return (0);

	return (s1[x] - s2[x]);
}

