#include "lists.h"
/**
 * sum_listint - returns sum of all data (n) of listint_t linked list
 * @head: head of the list
 *
 * Return: sum of all data in a list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
