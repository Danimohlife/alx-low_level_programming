#include "main.h"
/**
 * puts_half - half I see
 * @str: about half
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j, k = 0;

	while (str[k] != '\0')
		k++;

	j = k / 2 - 1;

	for (i = 0; i <= j; i++)
		_putchar(str[k / 2 + i]);
	_putchar('\n');
}
