#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first node in the list
 * @str: string to be duplicated
 *
 * Return:address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t num_of_chars = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	while (str[num_of_chars] != '\0')
		num_of_chars++;

	new->len = num_of_chars;
	new->next = *head;
	*head = new;

	return (*head);
}
