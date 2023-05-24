#include "main.h"
/**
 * print_last_digit - I dey your back please
 * @n: aurg
 * Return: last num
 */
int print_last_digit(int n)
{
	int s;

	s = n % 10;
	if (s < 0)
		s = -s;
	_putchar(s + '0');
	return (s);
}
