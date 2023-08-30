#include "lists.h"
/**
 * listint_len - function that returns number of elements in a linked list.
 * @h: head of the linked list
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}
