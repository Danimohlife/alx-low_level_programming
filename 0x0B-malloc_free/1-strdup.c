#include "main.h"
#include <stdlib.h>
/**
* _strdup - string function
* @str: string dupliated
* Return: a pointer
*/
char *_strdup(char *str)
{
	char *ptr_str;
	int num_one = 1;
	int num_tw = 0;

	if (str == NULL)
		return (NULL);
	while (str[num_one])
		num_one++;
	ptr_str = (char *)malloc(num_one * sizeof(char) + 1);
	if (ptr_str == NULL)
		return (NULL);
	while (num_tw < num_one)
	{
		ptr_str[num_tw] = str[num_tw];
		num_tw++;
	}
	ptr_str[num_tw] = '\0';
	return (ptr_str);
}
