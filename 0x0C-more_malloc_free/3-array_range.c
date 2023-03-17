#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int i, size;
	int *pointer;

	if (min > max)
		return (NULL);
	pointer = malloc(sizeof(int) * (size = max - min + 1));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		pointer[i] = min++;
	return (pointer);
}


