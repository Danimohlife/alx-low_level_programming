#include "main.h"
/**
 * print_line - what line
 * @n: as in n
 * Return: nothin
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}


}
