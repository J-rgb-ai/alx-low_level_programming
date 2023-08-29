#include "lists.h"
/**
 * add_node_end - adds a new nod et the end of a list_t list
 * @head: pointer to a pointer to the head of the linked list
 * @str: string to be duplicated
 *
 * Return: adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nchars = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[nchars] != '\0')
		nchars++;
	new->len = nchars;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp->next = new;
	}
	return (*head);
}
