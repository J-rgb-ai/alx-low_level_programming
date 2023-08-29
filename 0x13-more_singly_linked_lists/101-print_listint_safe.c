#include "lists.h"
/**
 * print_listint_safe - prints  alistint_t linked list
 * @head: pointer to the head node of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head, *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;

		slow = head;
		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			slow = slow->next;
			fast = fast->next;
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		exit(98);
		}
	}
	if (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}
	return (count);
}		
