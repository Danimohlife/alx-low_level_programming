#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print number without 2 & 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			putchar(i + '0');
	putchar('\n');
}
