#include "lists.h"

/**
 * reverse_listint - reverses an int list
 * @head: address of pointer to first node
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *girl = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	girl = *head;
	*head = NULL;
	while (girl)
	{
		next = girl->next;
		girl->next = *head;
		*head = girl;
		girl = next;
	}
	return (*head);
}
