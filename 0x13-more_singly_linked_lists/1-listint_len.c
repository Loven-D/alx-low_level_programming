#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of element in a linked listint_t list.
 * @h: pointer to the head node of the list.
 * Return: number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}


	return (count);
}
