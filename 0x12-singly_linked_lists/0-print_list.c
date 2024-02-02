#include "lists.h"
/**
 * print_list - prints all the data inside the linked list
 * @h: pointer to the starting point of a linked list
 *
 * Return: count - the number of nodes
 */
size_t print_list(list_t *h)
{
	size_t count = 0;
	list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		count++;
	}
	return (count);
}
