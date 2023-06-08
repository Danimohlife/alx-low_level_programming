#include "main.h"
/**
 * _strlen_recursion - recursion
 * @s: pointer
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (i);
	i = 1 + _strlen_recursion(s + 1);
	return (i);

}
