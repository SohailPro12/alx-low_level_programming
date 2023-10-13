#include "lists.h"

/**
 * add_dnodeint - adds new head node to dlist
 * @head: address of pointer to current head node
 * @n: int field of new node
 *
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!head || !newnode)
	{
		if (newnode)
		{
			free(newnode);
		}
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;

	if (!*head)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}
	return (NULL);
}
