#include "main.h"
/**
 * rev_string - reverse writting
 * @s: str in rev pointer
 * Return: nothing
 */
void rev_string(char *s)
{
	int j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	s--;
	while (j > 0)
	{
		_putchar(*s);
		j--;
		s--;
	}
	_putchar('\n');
}
