#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: A pointer to the concatenated string
 * NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Adjust n if it exceeds length of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	/* Copy s1 to the concatenated string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Concatenate n bytes of s2 to the concatenated string */
	for (i = 0; i < n; i++)
		concat[len1 + i] = s2[i];

	/* Add null terminator */
	concat[len1 + n] = '\0';

	return (concat);
}
