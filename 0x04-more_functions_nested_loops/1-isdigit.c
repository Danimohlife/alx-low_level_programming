#include "main.h"
#include <stdlib.h>
/**
 * _isdigit - give me a number
 * @c: watch for number
 * Return: 1 / 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
