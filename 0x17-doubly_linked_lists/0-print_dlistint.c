#include "lists.h"
/**
  * print_dlistint - print all the elements of a linked list
  * @h: the linked list
  * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int j = 0;

	if (h == NULL)
		return (j);

	while (h->prev != NULL)
		h = h->prev;

	for (; h != NULL; j++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (j);
}
