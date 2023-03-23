#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all given optional parameters
 * @n: the number of additional arguments supplied
 * @...: optional arguments for variadic function
 *
 * Return: the sume of all additional arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, it = (int)n;

	if (n == 0)
		return (sum);
	va_start(args, n);
	while (it--)
		sum += va_arg(args, int);
	return (sum);
}
