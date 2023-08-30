#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a listint_t linked list.
 * @head: head of the list
 * @index: index of the node, starting at 0
 *
 * Return: nth node of a list, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int num = 0;

	temp = head;
	while (temp != NULL)
	{
		if (num == index)
			return (temp);
		num++;
		temp = temp->next;
	}
	return (NULL);
}
