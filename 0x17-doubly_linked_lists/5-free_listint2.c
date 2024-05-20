#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees linked list
 * @head: pointer to struct
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
		return;
	current  = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
