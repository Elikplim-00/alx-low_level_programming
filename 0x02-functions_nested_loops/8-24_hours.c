#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			int hour_tens = hours / 10;
			int hour_ones = hours % 10;
			int minute_tens = minutes / 10;
			int minute_ones = minutes % 10;

			_putchar(hour_tens + '0');
			_putchar(hour_ones + '0');
			_putchar(':');
			_putchar(minute_tens + '0');
			_putchar(minute_ones + '0');
			_putchar('\n');
		}
	}
}
