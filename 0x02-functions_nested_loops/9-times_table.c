#include "main.h"
#include <stdio.h>
/**
 * times_table - of 9s
 * Return: nothing
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x * y <= 9)
				_putchar((x * y % 10) + '0');
			else if (x * y > 9)
			{
				_putchar((x*y / 10) + '0');
				_putchar((x*y % 10) + '0');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (x * y < 9)
				_putchar(' ');
			if (y == 9)
				_putchar('\n');

		}
	}
}
