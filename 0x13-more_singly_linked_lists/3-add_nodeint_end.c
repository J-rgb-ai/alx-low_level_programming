#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to head in a linked list
 * @n: integer tobe duplicated and used in the new node
 *
 * Return: adress of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	const int w = n;
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = w;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
