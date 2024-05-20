#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to head
 *
 * Return: a pointer to the fist node of the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *nxt;

	previous = NULL;
	nxt = NULL;
	nxt = NULL;

	while (*head !=  NULL)
	{
		nxt = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = nxt;
	}

	*head = previous;
	return (*head);
}
