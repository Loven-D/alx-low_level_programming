#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to a pointer to the head of the list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL; /* Previous node */
	listint_t *current = *head; /* Current node */

	while (current != NULL)
	{
		listint_t *next = current->next; /* Next node */

		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (prev);
}
