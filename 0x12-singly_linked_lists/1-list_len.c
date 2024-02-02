#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the start of the list
 *
 * Return: len - the length/number of elements of the list
 */
size_t list_len(list_t *h)
{
	size_t len = 0;
	list_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
