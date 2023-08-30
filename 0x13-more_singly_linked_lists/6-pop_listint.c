#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: double pointer to head
 *
 * Return: head's node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);

	return (n);
}
