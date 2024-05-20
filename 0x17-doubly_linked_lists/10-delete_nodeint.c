#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at
 * index
 * @head: pointer to the node
 * @index: inde of node o be deleted
 * Return: 1 success 0 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;
	listint_t *temp;

	if (*head != NULL)
	{
		current = *head;
		if (index == 0)
		{
			*head = current->next;
			free(current);
			return (1);
		}
		while (current != NULL && i < index)
		{
			temp = current;
			current = current->next;
			i++;
		}
		if (i == index)
		{
			temp->next = current->next;
			free(current);
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	return (-1);
}
