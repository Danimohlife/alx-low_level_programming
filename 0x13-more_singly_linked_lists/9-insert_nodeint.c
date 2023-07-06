#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Base on index specify
 * @head: To struc
 * @n: nth index
 * @idx: index specify
 * Return: iserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	count = 0;

	while (count < idx - 1 && current != NULL)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
