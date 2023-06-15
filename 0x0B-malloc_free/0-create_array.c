#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* create_array -> creating array
* @size: size of array to be created
* @c: character an array is initialized with
* Return: a pointer to an array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int intr;
	char *str_ptr;

	if (size == 0)
		return (NULL);
	str_ptr = (char *)malloc(size * sizeof(char));
	if (str_ptr == NULL)
		return (NULL);
	for (intr = 0; intr < size; intr++)
		str_ptr[intr] = c;

	return (str_ptr);
}
