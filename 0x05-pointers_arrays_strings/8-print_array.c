#include "main.h"
#include <stdio.h>
/**
 * print_array - array sh
 * @a: connect to arr
 * @b: num of num
 * Return: notin
 */
void print_array(int *a, int b)
{
	int c;

	for (c = 0; c < b; c++)
	{
		if (c != b - 1)
			printf("%d, ", a[c]);
		else 
			printf("%d\n", a[c]);
	}

}
