#include "lists.h"
/**
 * insert_dnodeint_at_index - insert
 * @h: to struct
 * @idx: index to insert
 * @n: dada to h
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current, *new_node;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
