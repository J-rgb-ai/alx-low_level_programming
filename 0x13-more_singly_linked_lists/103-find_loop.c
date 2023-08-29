#include "lists.h"
/**
 * find_listint_loop - finds loop in a linked list
 * @head: pointer to the first node in the list
 *
 * Return: the adress of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
		return (NULL);
	while (slow != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow!= fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
