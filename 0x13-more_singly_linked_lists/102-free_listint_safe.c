#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: the datatype pointer of the struct
 *
 * Return: the size of the list that was freed, sets the head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);
	current = *h;

	while (current)
	{
		counter++;

		next = (*current).next;
		free(current);

		if (current <= next)
			break;

		current = next;
	}
	*h = NULL;

	return (counter);
}
