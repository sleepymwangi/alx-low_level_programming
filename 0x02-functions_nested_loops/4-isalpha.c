#include "main.h"

/**
 * _isalpha - print lowercase or uppercase
 * @c: is c a character
 * Return: 1
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
