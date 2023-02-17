#include <stdio.h>
/**
 * main - outputs all possible unique combinations of 3 numbers
 *
 * Return: 0 if the code executes successfully
 */
int main(void)
{
	int n1 = 0x2F, st1 = 0x30, nl = 0x0A;

	while (n1++ < 0x39)
	{
		int n2 = st1, st2 = n2 + 1;

		while (n2++ < 0x39)
		{
			int n3 = st2;

			while (n3++ < 0x39)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if (n1 != 0x37)
				{
					putchar(',');
					putchar(' ');
				}
			}
			st2++;
		}
		st1++;
	}
	putchar(nl);
	return (0);
}
