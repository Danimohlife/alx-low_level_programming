/**
 * get_endianness - Checks the endianness
 * Return: 0 / 1
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *byte = (char *)&value;

	return (*byte == 1);
}
