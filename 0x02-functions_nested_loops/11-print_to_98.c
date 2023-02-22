#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers starting from n to 98 inclusive
 * @n: the starting number
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (n < 98)
	{
		int i;

		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("98");
}
