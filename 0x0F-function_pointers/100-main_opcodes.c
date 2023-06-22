#include <stdio.h>
#include <stdlib.h>
/**
 * main - main for argc & argv
 * @argv: array
 * @argc: array num
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
	return (0);
}
