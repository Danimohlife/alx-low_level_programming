#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * is_valid_number - cheacking if num
 * @str: point to incoming argu
 * Return: 1
 */
int is_valid_number(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
/**
 * main - function main
 * @argc: first argument
 * @argv: sec argment
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	multiply_numbers(argv[1], argv[2]);
	return (0);
}
