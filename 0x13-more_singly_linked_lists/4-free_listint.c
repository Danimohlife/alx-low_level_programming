#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free malloc declared
 * @head: to stru
 * Return: void funct
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
