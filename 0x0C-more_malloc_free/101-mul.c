#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * multiply - Multiplies two positive numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: Result of the multiplication
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

    /* Check the number of arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

    /* Check if arguments contain only digits */
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}

    /* Convert arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

    /* Perform multiplication */
	result = multiply(num1, num2);

    /* Print the result */
	printf("%d\n", result);
	return (0);
}
