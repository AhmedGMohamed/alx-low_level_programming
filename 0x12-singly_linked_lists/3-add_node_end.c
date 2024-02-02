#include "lists.h"
/**
 * add_node_end - add a node at the end of a linked list
 * @head: pointer to pointer of first element of the list
 * @str: the data to insert in the node
 *
 * Return: node - pointer to the created (last) node in the list
 */
list_t *add_node_end(list_t **head, char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *last = *head;
	int len = strlen(str);
	char *string = strdup(str);

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = string;
	newNode->len = len;
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
