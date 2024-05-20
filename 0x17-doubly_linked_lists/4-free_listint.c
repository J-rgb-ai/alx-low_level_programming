#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -frees the memory for list
 * @head: pointer to struct
 * Return: voi
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
