#include "main.h"
/**
 * _strcpy - string cpy
 * @dest: destination file
 * @src: source file
 * Retrun: Destination file
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);

}
