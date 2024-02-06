#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to pointer of the list's head node
 *
 * Return: n - the number (data) contained in the head
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *next;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (n);
}
