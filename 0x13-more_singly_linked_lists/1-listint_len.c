#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - prints the length of the list
 * @h: pointer to the elements in the list
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
