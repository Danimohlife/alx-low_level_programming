#include "main.h"
/**
 * print_rev - reverse writting
 * @s: str in rev pointer
 * Return: nothing
 */
void print_rev(char *s)
{
	int j, i = 0;

	while (s[i] != '\0')
		i++;
	for (j = i; j > 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
