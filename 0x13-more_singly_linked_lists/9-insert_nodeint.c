#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts node at index n
 * @head: pointer to node
 * @idx: index to insert node
 * @n: value to insert
 * Return: node pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *current;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	if (*head != NULL)
		current = *head;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (i == idx - 1 && current != NULL)
	{
		newnode->next = current->next;
		current->next = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
