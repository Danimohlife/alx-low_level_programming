#include <stdio.h>
/**
 * main - for other funcs
 * Return: always 0
 */
int main(void)
{
	char x, y;

	for (x = 'a'; x < 'z'; x++)
		putchar(x);
	for (y = 'A'; y < 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
