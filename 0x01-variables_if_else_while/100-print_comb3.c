#include <stdio.h>
/**
 * main - print all single digit numbers from 0 to 9 formatted
 *
 * Return: 0 if the code executes successfully
 */
int main(void)
{
	int n = 0x2F, st = 0x30, nl = 0x0A;

	while (n++ < 0x39)
	{
		int n2 = st;

		while (n2++ < 0x39)
		{
			putchar(n);
			putchar(n2);
			if (n != 0x38)
			{
				putchar(',');
				putchar(' ');
			}
		}
		st++;
	}
	putchar(nl);
	return (0);
}
