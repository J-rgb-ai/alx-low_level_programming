#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to head
 * @idx: index ot list where new node should be added
 * @n: duplicated to get a new node
 *
 * Return: adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 0;
	int duplicate = n;
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = duplicate;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp != NULL && num < idx - 1)
	{
		temp = temp->next;
			num++;
	}

	if (temp == NULL)
		return (NULL);

	new->next = temp->next;
	temp->next = new;

	return (new);
}
