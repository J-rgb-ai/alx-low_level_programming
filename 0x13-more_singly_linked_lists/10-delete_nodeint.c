#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer to head
 * @index: index of the node that should bbe deleted
 *
 * Return: 1 success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int num = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && num < index)
	{
		prev = temp;
		temp = temp->next;
		num++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
