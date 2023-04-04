#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given index in a list
 * @head: pointer to pointer to head node of the list
 * @idx: the index to insert the node at
 * @n: the data of the node to insert
 *
 * Return: NULL if allocation or insertion failed,
 *   otherwise return a pointer to the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int counter = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*head == NULL)
		{
			new->next = NULL;
			*head = new;
			return (new);
		}
		new->next = *head;
		*head = new;
		return (new);
	}
	while (current != NULL && counter + 1 < idx)
	{
		current = current->next;
		counter++;
	}
	if (current == NULL)
		return (NULL);
	new->next = current->next;
	current->next = new;
	return (new);
}
