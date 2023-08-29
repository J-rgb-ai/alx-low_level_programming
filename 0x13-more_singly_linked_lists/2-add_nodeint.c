#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning o a linked list
 * @head: pointer to a pointer pointing to head
 * @n: node
 * Return: adress of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	const int w = n;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = w;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
