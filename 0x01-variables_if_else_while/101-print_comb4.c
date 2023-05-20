#include <stdio.h>
/**
 * main - for main
 * Return: 0
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 9; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (x < y && y < z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
				}
				if (x < y && y < z && x < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
