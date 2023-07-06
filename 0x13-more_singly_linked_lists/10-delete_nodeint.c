#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - As the name say
 * @head: to struc
 * @index: index
 * Return: 1 / -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *previous, *current;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

		return (1);
	}
	current = *head;
	previous = NULL;

	count = 0;

	while (count < index && current != NULL)
	{
		previous = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	previous->next = current->next;

	free(current);
	return (1);
}
