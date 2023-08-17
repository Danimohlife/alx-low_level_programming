#include "lists.h"
/**
 * sum_dlistint - funct to sum struct value
 * @head: To access struct
 * Return: Sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
