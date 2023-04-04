#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning of a listint_t list.
 * @head: pointer to a pointer to the head node.
 * @n: the integer value to be stored in the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new;

	if (head == NULL)
		return (NULL);

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
		return (NULL);

	node_new->n = n;
	node_new->next = *head;
	*head = node_new;

	return (node_new);
}
