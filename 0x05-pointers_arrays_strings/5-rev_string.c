#include "main.h"
#include <stdio.h>
/**
 * rev_string - string
 * @s: pointer to string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j;
	char reverse = s[0];

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	for (j = 0; j < i; j++)
	{
		i--;
		reverse = s[j];
		s[j] = s[i];
		s[i] = reverse;
	}
}
