#include "lists.h"

/**
 * listint_len - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return(i);
}
