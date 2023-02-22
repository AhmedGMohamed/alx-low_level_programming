#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet then newline 10 times
 */

void print_alphabet_x10(void)

{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		char letter = 97;

		while (letter != 123)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
