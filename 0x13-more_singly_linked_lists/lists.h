#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * listint_t - typedef for list type
 */
typedef struct listint listint_t;
/**
 * struct listint - A node for a linked list
 * @n: a number (data)
 * @next: pointer to the next node in the linked list
 */
struct listint
{
	int n;
	listint_t *next;
};
int _putchar(char);
size_t print_listint(listint_t *h);
size_t listint_len(listint_t *h);
listint_t *add_nodeint(listint_t **head, int n);
listint_t *add_nodeint_end(listint_t **head, int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
#endif
