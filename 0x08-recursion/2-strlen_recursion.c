#include "main.h"

/**
 * _strlen_recursion - prints numbers of char in a string
 * @s: the string
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
