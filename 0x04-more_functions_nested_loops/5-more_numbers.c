#include "main.h"
/**
 * more_numbers - number
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar((j / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
