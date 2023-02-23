#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: int through 0 through 9
 * Return: 1- Digit 0- Not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
