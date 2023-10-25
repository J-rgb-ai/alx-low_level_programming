#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the first node
 * @head: pointer to head element
 * Return: int value
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current;
	listint_t *next;

	if (*head == NULL)
		return (0);
	current = *head;
	i = current->n;
	next = current->next;
	*head = next;
	free(current);
	return (i);
}
