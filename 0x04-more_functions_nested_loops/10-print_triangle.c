#include "main.h"
/**
 * print_triangle - try angle
 * @size: KG KM
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j + i < size)
					putchar(' ');
				else
					putchar('#');
			}
			putchar('\n');
		}
	}
}

