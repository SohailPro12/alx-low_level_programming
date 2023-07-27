#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: pointer to head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node, *nnode;

	if (!head)
		return;

	node = head;
	while (node)
	{
		nnode = node->next;
		free(node->str);
		free(node);
		node = nnode;
	}
}
