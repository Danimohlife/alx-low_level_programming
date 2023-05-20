#include <stdio.h>
/**
 * main - main 5 4 5
 * Return: 0 Success
 */
int main(void)
{
	int s, t;

	for (s = 0; s < 9; s++)
	{
		for (t = 0; t < 10; t++)
		{
			if (s < t)
			{
				putchar(s + '0');
				putchar(t + '0');
			}
			if (s < t && s < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
