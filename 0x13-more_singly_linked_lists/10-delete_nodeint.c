#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: address of pointer to first node
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *girl, *prev_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		girl = *head;
		*head = (*head)->next;
		free(girl);
		return (1);
	}
	girl = *head;
	while (girl)
	{
		if (i == index)
		{
			prev_node->next = girl->next;
			free(girl);
			return (1);
		}
		i++;
		prev_node = girl;
		girl = girl->next;
	}
	return (-1);
}
