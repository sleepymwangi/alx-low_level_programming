#include "lists.h"

/**
 * sum_listint - calculate the sum of all the integer values in a linked list
 * @head: A pointer to the head node of the linked list
 * Return: The sum of all the integer values in the linked list,
 * or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum = sum + (*current).n;

		current = (*current).next;
	}
	return (sum);
}
