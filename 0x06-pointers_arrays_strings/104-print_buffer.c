#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints all characters in a string in a buffer form
 * @b: the buffer to print
 * @size: the size of the string to print
 */
void print_buffer(char *b, int size)
{
	int st = 0, cntr, cpy;

	while (size > 0)
	{
		cntr = 0, cpy = size;
		printf("%08x: ", st);
		while (cntr < 10 && cpy > 0)
		{
			printf("%02x", b[cntr + st]);
			if (cntr % 2 != 0)
			{
				printf(" ");
			}
			cntr++, cpy--;
		}
		while (cntr < 10)
		{
			printf("%2s", "");
			if (cntr % 2 != 0)
			{
				printf(" ");
			}
			cntr++, cpy--;
		}
		cntr = 0, cpy = size;
		while (cntr < 10 && cpy > 0)
		{
			if (isprint(b[cntr + st]))
				printf("%c", b[cntr + st]);
			else
				printf(".");
			cntr++, cpy--;
		}
		printf("\n");
		st += 10, size = cpy;
	}
}
