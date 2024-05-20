#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head node of the doubly linked list.
 * @index: The index of the desired node, starting from 0.
 *
 * Return: If node at the specified index exists, return
 * a pointer to that node.Otherwise, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int current_index = 0;

	while (current != NULL)
	{
		if (current_index == index)
		{
			return (current);
		}

		current = current->next;
		current_index++;
	}

	return (NULL);
}
