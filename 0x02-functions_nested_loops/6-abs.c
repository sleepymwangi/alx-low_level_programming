#include "main.h"

/**
 * _abs - functionthat computes the absolute value
 * @n: integer
 * Return: 0 succession
 */
int _abs(int n)
{

	while (n < 0)
	{
		return (n * -1);
	}
	n++;
	return (n);
}
