#include "lists.h"
/**
 * add_node -  a function that adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 * Return: pointer to the new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
