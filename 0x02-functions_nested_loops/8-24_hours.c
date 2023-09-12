#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: no return
 */

void jack_bauer()
{
	int hour;
	int minute;

	hour = 0;

	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			minute++;
		}
		hour++
	}
	_putchar('\n');
}
