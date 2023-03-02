#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (y = 0; y < n / 2; y++)
	{
		x = a[y];
		a[y] = a[n - 1 - y];
		a[n - 1 - y] = x;
	}
}
