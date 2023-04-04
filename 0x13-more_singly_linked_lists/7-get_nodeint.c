#include "lists.h"
/**
 * get_nodeint - returns the node at the given index of a list
 * @head: pointer to the head of the list
 * @index: the index of the node to return
 *
 * Return: NULL if the node does not exist, a pointer to the node otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int counter = 0;

	while (counter < index && head != NULL)
	{
		head = head->next;
		counter++;
	}
	if (head == NULL)
		return (NULL);
	else
		return (head);
}
