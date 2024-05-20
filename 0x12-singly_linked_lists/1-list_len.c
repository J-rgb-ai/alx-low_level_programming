#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to head
 *
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t n_elements = 0;

	while (h != NULL)
	{
		n_elements++;
		h = h->next;
	}
	return (n_elements);
}
