#include "lists.h"
/**
 * free_listint2 - free the memory allocated by a linked list
 * @head: pointer to pointer of list type
 */
void free_listint2(listint_t **head)
{
	listint_t *next = *head;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;
	while ((*head)->next != NULL && (*head) != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(*head);
	*head = NULL;
}
