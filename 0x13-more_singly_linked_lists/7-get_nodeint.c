#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting at 0
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	/* Traverse the list to the desired index */
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	/* If the index is out of bounds, return NULL */
	if (current == NULL)
		return (NULL);

	/* Otherwise, return the pointer to the nth node */
	return (current);
}
