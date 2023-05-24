#include "main.h"
#include <stdio.h>
/**
 * times_table - of 9s
 * Return: nothing
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if (z <= 9 && y < 9)
				printf("%d,  ", z);
			else if (z <= 9 && y == 9)
				printf("%d\n", z);
			else if (z > 9 && y < 9)
				printf("%d, ", z);
			else if (z >= 10 && y == 9)
				printf("%d\n", z);
		}
	}
}
