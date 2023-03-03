#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_char_hex - prints the hex code for 10 characters in a buffer form
 * @b: the buffer to print
 * @size: the size of the string to print
 * @st: the ordering of the first element of the line (i.e. 0, 10, 20, ...etc)
 */
void print_char_hex(char *b, int size, int st)
{
	int cntr = 0, cpy = size;

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
}
/**
 * print_buffer - prints all characters in a string in a buffer form
 * @b: the buffer to print
 * @size: the size of the string to print
 */
void print_buffer(char *b, int size)
{
	int st = 0, cntr, cpy;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		while (size > 0)
		{
			printf("%08x: ", st);
			print_char_hex(b, size, st);
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
}
