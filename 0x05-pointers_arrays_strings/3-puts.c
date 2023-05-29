#include "main.h"
/**
 * _puts - Drop as I give you
 * @str: point to str
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
