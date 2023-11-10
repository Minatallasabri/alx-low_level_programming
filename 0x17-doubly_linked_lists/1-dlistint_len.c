#include "lists.h"
/**
  * dlistint_len - count the number of element in linked list
  * @h: the linked list
  * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int j = 0;

	if (h == NULL)
		return (j);
	while (h->prev != NULL)
		h = h->prev;

	for (; h != NULL; j++)
		h = h->next;

	return (j);
}
