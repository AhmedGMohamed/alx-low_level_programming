#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - returns a function based on the operator supplied
 * @s: the operator to check
 *
 * Return: func - a pointer to a function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (i < 5 && strcmp(s, ops[i].op))
		i++;
	return (ops[i].f);
}
