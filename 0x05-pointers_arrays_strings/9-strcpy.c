#include "main.h"
/**
 * _strcpy - string copy
 * @dest: destination file
 * @src: source file
 * Return: Destination file
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (*src == "")
		return (dest);

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);

}
