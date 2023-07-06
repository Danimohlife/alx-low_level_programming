#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - as it is mention
 * @h: stru
 * Return: srtc
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current = *h;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		node_count++;

		if (next <= current)
		{
			*h = NULL;
			return (node_count);
		}

		current = next;
	}

	*h = NULL;
	return (node_count);
}
