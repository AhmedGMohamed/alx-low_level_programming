#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
	char letter = 97;

	while (letter != 123)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

/**
 * main - calls the function print_alphabet
 *
 * Return: 0 if the code executes successfully
 */

int main(void)
{
	print_alphabet();
	return (0);
}
