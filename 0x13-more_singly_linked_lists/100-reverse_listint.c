#include <stddef.h>
#include "lists.h"
/**
 * reverse_listint - show it in rev
 * @head: stru
 * Return: struc
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	prev = NULL;
	current = *head;
	next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
