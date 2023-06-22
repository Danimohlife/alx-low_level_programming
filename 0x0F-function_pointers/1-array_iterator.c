#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - iterator
 * @array: array
 * @size: of size
 * @action: pointer to funct
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

