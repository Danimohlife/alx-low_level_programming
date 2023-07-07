/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: The converted numb, / 0 if there is an invalid char or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;

	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result << 1) + (b[i] - '0');
	}

	return (result);
}
