/**
 * _strncpy - string with nth concat
 * @dest: Desstination buffer/ file
 * @src: source file
 * @n: num to cpy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
