#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - add node to the end
 * @head: pointer to head
 * @n: integer to added
 * Return: pointer to struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *current;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		current = *head;
		while (current->next !=	NULL)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	return (newnode);
}
