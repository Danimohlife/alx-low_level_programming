#include <stdio.h>
/**
 * main - main 4 all
 * Return: 0
 */
int main(void)
{
	int x = 0;
	char str[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	while (x < 59)
	{
		putchar(str[x]);
		x++;
	}
	return (0);
}
