#include "lists.h"
/**
 * get_dnodeint_at_index - get at index
 * @head: to struct
 * @index: at index
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}
	return head;
}
