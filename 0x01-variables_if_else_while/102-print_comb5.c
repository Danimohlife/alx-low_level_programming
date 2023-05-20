#include <stdio.h>
/**
 * main - main 4 all
 * Return: 0 success
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 99; x++)
	{
		for (y = 0; y < 100; y++)
		{
			if (y > x)
			{
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
			}
			if (x < 98 && y > x)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
