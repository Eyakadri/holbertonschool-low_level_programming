#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @n: string to be added to the list
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head != NULL)
		(*head)->prev = node;
	*head = node;
	return (node);
}
