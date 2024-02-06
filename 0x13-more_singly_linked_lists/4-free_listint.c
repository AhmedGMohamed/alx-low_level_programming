#include "lists.h"
/**
 * free_listint - frees the memmory allocated by linked lists
 * @head: a pointer to the starting node of the list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
