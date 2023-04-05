#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node
 * 	at the given index of a listint_t linked list
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to be deleted, starting at 0
 *
 * Return: 1 if deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (*head == NULL) /* Check if list is empty */
		return (-1);

	current = *head; /* Set current to the head of the list */

	/* If index is 0, delete the head node */
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	/* Traverse the list to the node before the desired index */
	for (i = 0; i < index - 1 && current != NULL; i++)
		current = current->next;

	/* If the index is out of bounds, return -1 */
	if (current == NULL || current->next == NULL)
		return (-1);

	/* Store the node to be deleted in a temporary variable */
	temp = current->next;
	/* Update the next pointer of the current node */
	current->next = current->next->next;

	free(temp); /* Free the memory of the deleted node */
	return (1);
}
