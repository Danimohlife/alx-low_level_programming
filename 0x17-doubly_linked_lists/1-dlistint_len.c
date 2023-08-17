#include "lists.h"
/**
 * dlistint_len - find lent of struct
 * @h: POinter to trave
 * Return: lenght
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
