#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name using the supplied function & name
 * @name: the name to print
 * @f: pointer to the function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
