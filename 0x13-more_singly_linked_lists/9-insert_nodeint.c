#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: address of pointer to first node
 * @idx: index to insert new node
 * @n: n value of new node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *girl, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	girl = *head;
	while (girl)
	{
		if (i == idx - 1)
		{
			new_node->next = girl->next;
			girl->next = new_node;
			return (new_node);
		}
		i++;
		girl = girl->next;
	}
	free(new_node);
	return (NULL);
}
