#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: string to be added to the list
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = NULL;
	dlistint_t *tmp = NULL;
	dlistint_t *new = NULL;
	unsigned int a = 0;

	if (h == NULL)
		return (NULL);
	node = *h;
	while (node != NULL)
	{
		if (a == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
			{
				free(new);
				return (NULL);
			}
			new->n = n;
			new->prev = node->prev;
			new->next = node;
			if (node->prev != NULL)
				node->prev->next = new;
			node->prev = new;
			if (a == 0)
				*h = new;
			return (new);
		}
		node = node->next;
		a++;
	}
	if (a == idx)
	{
		tmp = malloc(sizeof(dlistint_t));
		if (tmp == NULL)
		{
			free(tmp);
			return (NULL);
		}
		tmp->n = n;
		tmp->prev = NULL;
		tmp->next = NULL;
		if (*h == NULL)
		{
			*h = tmp;
			return (tmp);
		}
		node = *h;
		while (node->next != NULL)
			node = node->next;
		node->next = tmp;
		tmp->prev = node;
		return (tmp);
	}
	return (NULL);
}
