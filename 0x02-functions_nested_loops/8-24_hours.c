#include "main.h"
/**
 * jack_bauer - prints the clock from 00:00 to 23:59
 */

void jack_bauer(void)

{
	int hours;

	for (hours = 0; hours < 24; hours++)
	{
		int mins;

		for (mins = 0; mins < 60; mins++)
		{
			_putchar(hours % 100 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(mins % 100 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');
		}
	}
}
