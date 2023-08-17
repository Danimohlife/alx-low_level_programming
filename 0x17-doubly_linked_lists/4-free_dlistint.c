#include "lists.h"
/**
 * free_dlistint - funct to free nodes
 * @head: to node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
