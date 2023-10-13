#include "lists.h"

/**
 * print_dlistint - prints doubly-linked list and number
 * of elements
 * @h: address of head node
 *
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	struct dlistint_s *current = h;
	int i = 0;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		i++;
		printf("\n");
	}
	return (i);
}
