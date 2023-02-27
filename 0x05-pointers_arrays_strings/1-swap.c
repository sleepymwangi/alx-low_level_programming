#include "main.h"

/**
 * swap_int - function that swaps the values of a and b
 * @a: int to be swapped to b
 * @b: int to be swapped to a
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = 0;
	x = *a;
	*a = *b;
	*b = x;
}

