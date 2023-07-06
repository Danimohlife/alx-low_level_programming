#include <stddef.h>
#include "lists.h"
/**
 * find_listint_loop - Name say it all
 * @head: struc
 * Return: node list
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL || head->next == NULL)
		return (NULL);

	listint_t *slow = head;
	listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;

				return (slow);
			}
		}
		return (NULL);
	}
}
