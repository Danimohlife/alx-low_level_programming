#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - funct to sum
 * @head: To struc
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
