#include "lists.h"
/**
 * print_listint - prints all the data inside the linked list
 * @h: pointer to the starting point of a linked list
 *
 * Return: count - the number of nodes
 */
size_t print_listint(listint_t *h)
{
	size_t count = 0;
	listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
