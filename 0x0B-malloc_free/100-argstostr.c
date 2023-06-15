#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates
 * @ac: number of arguments
 * @av: array
 * Return: 0 If ac == 0, av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *ptr_str;
	int gc, bt, index, sze = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (gc = 0; gc < ac; gc++)
	{
		for (bt = 0; av[gc][bt]; bt++)
			sze++;
	}
	ptr_str = malloc(sizeof(char) * sze + 1);

	if (ptr_str == NULL)
		return (NULL);

	index = 0;
	for (gc = 0; gc < ac; gc++)
	{
		for (bt = 0; av[gc][bt]; bt++)
			ptr_str[index++] = av[gc][bt];
		ptr_str[index++] = '\n';
	}
	ptr_str[sze] = '\0';
	return (ptr_str);
}
