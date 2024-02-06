#include "lists.h"
/**
 * sum_listint - returns the sum of all data in the linked list
 * @head: pointer to the head of a list
 *
 * Return: sum - the sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
