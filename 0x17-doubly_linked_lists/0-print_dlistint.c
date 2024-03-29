#include "lists.h"
/**
 * print_dlistint - first list
 * @h: pointer to next
 * Return: amount of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
