#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at the supplied index
 * @head: starting node of the list
 * @index: the index of the node to delete
 *
 * Return: 1 if the operation was successfull, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *before = *head;
	listint_t *current = *head;

	if (index == 0)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		free(before);
		*head = current;
		return (1);
	}
	while (counter < index && current != NULL)
	{
		before = current;
		current = current->next;
		counter++;
	}
	if (current == NULL)
		return (-1);
	before->next = current->next;
	free(current);
	return (1);
}
