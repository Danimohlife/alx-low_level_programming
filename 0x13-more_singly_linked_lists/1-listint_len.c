#include <stddef.h>
#include "lists.h"
/**
 * listint_len - funct to list
 * @h: access to list_l
 * Return: total element
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
