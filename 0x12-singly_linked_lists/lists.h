#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * list_t - typedef for list type
 */
typedef struct list list_t;
/**
 * struct list - A node for a linked list
 * @str: a string
 * @len: the length of the string
 * @next: pointer to the next element in the linked list
 */
struct list
{
	char *str;
	int len;
	list_t *next;
};
int _putchar(char);
size_t print_list(list_t *h);
size_t list_len(list_t *h);
list_t *add_node(list_t **head, char *str);
list_t *add_node_end(list_t **head, char *str);
void free_list(list_t *head);
#endif
