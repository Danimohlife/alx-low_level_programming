#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints nameb functs
 * @name: name to printed
 * @f: void functs
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
void print(char *name)
{
	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}
