#include <stdio.h>
/**
 * main - 4 main
 * Return: 0 S
 */
int main(void)
{
	int i;
	char x;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
