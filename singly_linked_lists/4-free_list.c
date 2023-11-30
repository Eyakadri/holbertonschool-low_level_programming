#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	if (head->next)
		free_list(head->next);
	free(head);
}
