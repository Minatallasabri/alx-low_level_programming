#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at given position
 * @h: pointer to head of doubly linked list
 * @idx: index of the list were element should be added
 * @n: number
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *m_list = *h, *new;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; m_list != NULL && i < idx; i++)
		m_list = m_list->next;
	if (m_list == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	else if (m_list != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		m_list->prev->next = new;
		new->prev = m_list->prev;
		m_list->prev = new;
		new->next = m_list;
		return (new);
	}
	return (NULL);
}
