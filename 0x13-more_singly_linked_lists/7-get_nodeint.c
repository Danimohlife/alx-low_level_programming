#include <stddef.h>
#include "lists.h"
/**
 * get_nodeint_at_index - funct to add nth index
 * @head: to struc
 * @index: nth as index
 * Return: nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return head;
		head = head->next;
		count++;
	}

	return NULL;
}
