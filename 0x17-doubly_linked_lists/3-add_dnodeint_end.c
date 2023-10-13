#include "lists.h"

/**
 * add_dnodeint_end - adds new node to end of dlist
 * @head: address of pointer to current head node
 * @n: int field of new node
 *
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t)), *lkhr;

	if (!head || !newnode)
	{
		if (newnode)
		{
			free(newnode);
		}
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (!*head)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		lkhr = *head;
		while (lkhr->next)
			lkhr = lkhr->next;
		lkhr->next = newnode;
		newnode->prev = lkhr;
	}
	return (newnode);
}
