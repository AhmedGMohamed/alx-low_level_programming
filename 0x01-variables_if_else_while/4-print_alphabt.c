#include <stdio.h>
/**
 * main - prints all lowercase alphabet letters except q and e
 *
 * Return: 0 if the code executes successfully
 */
int main(void)
{
	char ch = 0x60, newline = 0x0A;

	while (ch++ != 0x7A)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar(newline);
	return (0);
}
