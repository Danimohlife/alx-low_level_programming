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

	if (b < 0)
		printf("\n");

	for (c = 0; c <= b - 1 || b < 0; c++)
	{
		if (b < 0)
			break;
		if (c == b)
			printf("%d\n", a[c]);
		else
			printf("%d, ", a[c]);
	}
}
