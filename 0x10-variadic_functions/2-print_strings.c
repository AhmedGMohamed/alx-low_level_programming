#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints all supplied string followed by a given separator
 * @separator: the string to print after each argument
 * @n: the number of additional arguments supplied
 * @...: a list containing the additional arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int it = n;
	va_list args;
	char *str;

	va_start(args, n);
	while (it--)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && it != 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
