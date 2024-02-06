#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of a linked list
 * @head: pointer to pointer of first element of the list
 * @n: number (data) to add to the node
 *
 * Return: node - pointer to the created (last) node in the list
 */
listint_t *add_nodeint_end(listint_t **head, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
	}
	return (newNode);
}
