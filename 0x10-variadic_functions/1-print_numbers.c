#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints each number supplied followed by a separator
 * @separator: the string to print after each number
 * @n: the number of additional arguments supplied
 * @...: a list of additional arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int it = n;
	int num;
	va_list args;

	if (n == 0)
		return;
	va_start(args, n);
	while (it--)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && it != 0)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
