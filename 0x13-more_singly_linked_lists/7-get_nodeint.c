#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to head of the list
 * @index: psition of the node
 * Return: node pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (i == index)
	{
		return (current);
	}
	else
	return (NULL);
}
