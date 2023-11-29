#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list
 * @head: .
 * @str: .
 *Return: new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *node_end;
	int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		node_end = *head;
		while (node_end->next != NULL)
			node_end = last_node->next;
		node_end->next = new_node;
	}
	return (new_node);
}
