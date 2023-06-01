#include "main.h"
/**
 * print_times_table - table
 * @n: n
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j, k, l;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n > 15 || n < 0)
				break;
			k = i * j;
			if (k <= 99 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (k <= 9)
			{
				if (j != 0)
					_putchar(' ');
				_putchar((k % 10) + '0');
			}
			else if (k > 9 && k <= 99)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				l = k / 10;
					_putchar(',');
					_putchar(' ');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (j == n)
				_putchar('\n');
		}
	}
}
