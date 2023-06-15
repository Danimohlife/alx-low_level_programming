#include "main.h"
#include <stdlib.h>

/**
 * strlen_ - length of a string
 * @ch: input char
 * Return: length
 */

int strlen_(char *ch)
{
	int i = 0;

	while (*ch != '\0')
	{
		ch++;
		i++;
	}
	return (i);
}

/**
* str_concat - Concat 2 strings.
* @s1: string
* @s2: string
* Return: char
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int one1, two2;
	char *tm1, *tmp2;

	if (!s1)
		s1 = "";
	else
		one1 = strlen_(s1);

	if (!s2)
		s2 = "";
	else
		two2 = strlen_(s2);

	tm1 = malloc(one1 + two2 + 1);
	if (!tm1)
		return (0);

	tmp2 = tm1;
	while (*s1)
		*tmp2++ = *s1++;

	while ((*tmp2++ = *s2++))
		;

	return (tm1);
}
