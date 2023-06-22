#include "function_pointer.h"
#include <stdlib.h>
/**
 * print_name - print pointer funct
 * @name: pointer name
 * @f: pointer to funct
 * Return: nothin
 */
void print_name(char *name, void (*f)(char *))
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
