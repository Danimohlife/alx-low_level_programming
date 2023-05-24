#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @c: hold 98
 * Return: nothing
 */
void print_to_98(int c)
{
	if (c < 98 || c == 98)
	{
		for (; c <= 98; c++)
		{
			if (c == 98)
				printf("%d", c);
			else
				printf("%d, ", c);
		}
		printf("\n");
	}
	else if (c >= 98)
	{
		for (; c >= 98; c--)
		{
			if (c > 98)
				printf("%d, ", c);
			else
				printf("%d", c);

		}
		printf("\n");
	}
}
