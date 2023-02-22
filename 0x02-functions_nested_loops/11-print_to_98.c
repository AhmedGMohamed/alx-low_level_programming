#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers starting from n to 98 inclusive
 * @n: the starting number
 */

void print_to_98(int n)
{
	int i;
	if (n > 98)
	{
		for (i = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (i = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("98");
}
