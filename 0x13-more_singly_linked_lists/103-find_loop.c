#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *stc = head;
	listint_t *zain = head;

	if (!head)
		return (NULL);

	while (stc && zain && zain->next)
	{
		zain = zain->next->next;
		stc = stc->next;
		if (zain == stc)
		{
			stc = head;
			while (stc != zain)
			{
				stc = stc->next;
				zain = zain->next;
			}
			return (zain);
		}
	}

	return (NULL);
}
