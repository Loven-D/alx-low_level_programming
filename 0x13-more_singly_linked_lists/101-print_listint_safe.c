#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0; /* Counter for number of nodes */
	const listint_t *slow = head; /* Slow runner pointer */
	const listint_t *fast = head; /* Fast runner pointer */

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n); /* Print current node */
		count++; /* Increment node count */
		slow = slow->next; /* Move slow runner by one step */
		fast = fast->next->next; /* Move fast runner by two steps */
		/* If fast runner catches up with slow runner, it indicates a loop */
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			fprintf(stderr, "Error: List contains a loop\n");
			exit(98);
		}
	}

	/* If no loop is found, continue printing the rest of the list */
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}

	return (count);
}
