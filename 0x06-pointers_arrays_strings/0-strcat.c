#include "main.h"
/**
 * _strcat - concat string
 * @src: source file
 * @dest: Destination file
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k = 0;

	while (*src != '\0')
	{
		i++;
		src++;
	}
	while (*dest != '\0')
	{
		j++;
		dest++;
	}
	while (*src != '\0')
	{
		dest[j] = src[k];
		src++;
		j++;
	}
	return (dest);

}
