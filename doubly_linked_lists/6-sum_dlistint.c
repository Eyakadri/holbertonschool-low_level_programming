#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of all the data
 * @head: pointer to the head of the list
 * Return: sum of all the data (n) of a list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);
	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
