#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a
 *	new node at a given position in a listint_t linked list
 * @head: Pointer to a pointer to the head of the list
 * @idx: Index at which the new node should be added, starting at 0
 * @n: Value of the new node to be added
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* Set the data value of the new node */
	current = *head; /* Set current to the head of the list */

	/* If idx is 0, insert new node as the new head of the list */
	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to the node before the desired index */
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	/* If the index is out of bounds, free the new node and return NULL */
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node after the node at the desired index */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
