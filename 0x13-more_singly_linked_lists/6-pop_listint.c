#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - to bring pop node
 * @head: to node stru
 * Return: pop node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;

	temp = *head;
	*head = (*head)->next;

	free(temp);
	return (data);
}
