#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - funct
 * @head: struc
 * Return: stuc
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;
	const listint_t *temp = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}
	return (node_count);
}

