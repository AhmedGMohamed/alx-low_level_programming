#include "lists.h"
/**
 * add_node - add a node at the start of a linked list
 * @head: pointer to pointer of first element of the list
 * @n: number (data) for the node
 *
 * Return: node - pointer to the first node in the list
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head =  newNode;
	return (newNode);
}
