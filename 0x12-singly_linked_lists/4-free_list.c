#include "lists.h"
/**
 * free_list - frees the memmory allocated by linked lists
 * @head: a pointer to the starting node of the list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
