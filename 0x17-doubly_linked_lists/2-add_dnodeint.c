#include "lists.h"
/**
  * add_dnodeint - add node to beginning of linked list
  * @head: the head of linked list
  * @n: the value of new node
  * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *adds_new_node;
	dlistint_t *h;

	adds_new_node = malloc(sizeof(dlistint_t));
	if (adds_new_node == NULL)
		return (NULL);

	adds_new_node->n = n;
	adds_new_node->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	adds_new_node->next = h;

	if (h != NULL)
		h->prev = adds_new_node;

	*head = adds_new_node;

	return (adds_new_node);
}
