#include "lists.h"

/**
 * free_dlistint - frees a dlist
 * @head: pointer to current head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node, *next_node;

	if (!head)
		return;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
