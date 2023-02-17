#include <stdio.h>
/**
 * main - print all possible combinations from 0-99 two times
 *
 * Description: the function loops from 00 to 99 and outputs the current
 * before the first space, then starts looping from current iteration + 1
 * up to 99, then increments the iteration by 1
 * Example:
 *     [...], 23 97, 23 98, 23 99, 24 25, 24 26, 24 27, [...]
 * Return: 0 if the code executes successfully
 */
int main(void)
{
	int n1, n2, n3, n4, nl = 0x0A;

	for (n1 = 0x30; n1 < 0x3A; n1++)
	{
		for (n2 = 0x30; n2 < 0x3A; n2++)
		{
			for (n3 = n1; n3 < 0x3A; n3++)
			{
				for (n4 = n2 + 1; n4 < 0x3A; n4++)
				{
					putchar(n1);
					putchar(n2);
					putchar(' ');
					putchar(n3);
					putchar(n4);
					if (n1 != 0x39 ||
						n3 != 0x39 ||
						n4 != 0x39 ||
						n2 != 0x38)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(nl);
	return (0);
}
