#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node of a list
 * @head: pointer to the head of the list
 * @index: index of the node to be returned
 * Return: pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int a = 0;

	if (head == NULL)
		return (NULL);
	node = head;
	while (node != NULL)
	{
		if (a == index)
			return (node);
		node = node->next;
		a++;
	}
	return (NULL);
}
