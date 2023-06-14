#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int total = 0, i;
	
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int j;
			char *str;

			str = argv[i];
			for (j = 0; str[j] != '\0'; j++)
			{
				if (str[j] < 48 || str[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
