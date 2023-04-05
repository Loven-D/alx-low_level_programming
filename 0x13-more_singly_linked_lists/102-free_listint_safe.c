#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *tmp;
	
	if (h == NULL)
		return (0);
	
	current = *h;
	while (current != NULL)
	{
		count++;
		if (current < current->next)
		{
			tmp = current;
			current = current->next;
			free(tmp);
		}
		
		else
		{
			free(current);
			break;
		}
	}
	*h = NULL;
	
	return (count);
}
