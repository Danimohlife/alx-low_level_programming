#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - funct seekin int
 * @array: bunch of words with num
 * @size: sixe of array
 * @cmp: pointer to funct
 * Return: array/ -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
