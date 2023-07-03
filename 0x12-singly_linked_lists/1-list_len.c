#include <stddef.h>
#include "lists.h"
/**
 * list_len - function to print len of node
 * @h: node pointer
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
