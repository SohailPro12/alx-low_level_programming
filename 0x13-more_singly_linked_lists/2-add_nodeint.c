#include "lists.h"

/**
 * add_nodeint - adds a node to the top
 * @head: pointer to first node
 * @n: value for new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t newh = malloc(sizeof(listint_t));

	if (!head || !newh)
		return (NULL);

	newh->n = n;
	newh->next = NULL;

	if (*head)
		newh->next = *head;
	*head = newh;

	return (newh);
}
