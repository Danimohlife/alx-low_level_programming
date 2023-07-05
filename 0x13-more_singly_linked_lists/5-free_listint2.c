#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free
 * @head: set to null
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
