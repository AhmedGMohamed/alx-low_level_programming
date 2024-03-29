#include "lists.h"
/**
 * add_node - add a node at the start of a linked list
 * @head: pointer to pointer of first element of the list
 * @str: the data to insert in the node
 *
 * Return: node - pointer to the first node in the list
 */
list_t *add_node(list_t **head, char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	int len = strlen(str);
	char *string = strdup(str);

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = string;
	newNode->len = len;
	newNode->next = *head;
	*head =  newNode;
	return (newNode);
}
