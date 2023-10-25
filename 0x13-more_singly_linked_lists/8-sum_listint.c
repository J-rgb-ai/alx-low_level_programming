#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sum all the items in a list
 * @head: pointer to head element
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head != NULL)
	{
		current = head;
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}
