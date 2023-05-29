#include "main.h"
/**
 * swap_int - exchange item using pointer
 * @i: first item
 * @j: second item
 * Return: nothing
 */
void swap_int(int *i, int *j)
{
	int k;

	k = *i;
	*i = *j;
	*j = k;
}
