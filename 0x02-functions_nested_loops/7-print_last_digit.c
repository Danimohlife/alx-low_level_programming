#include "main.h"
/**
 * print_last_digit - I dey your back please
 * @n: aurg
 * Return: last num
 */
int print_last_digit(int n)
{
	int s;

	if (n < 0)
	{
		n = -n;
	}

	if (n >= 0 && n <= 9)
	{
		n = n / 10;
		s = n % 10;
		_putchar(s + '0');
	}
	else if (n > 9)
	{
		s = n % 10;
		_putchar(s + '0');
	}
	else if (n > 99)
	{
		n = n / 10;
		s = n % 10;
		_putchar(s + '0');
	}
	else if (n > 999)
	{
		n = n / 10;
		n = n / 10;
		s = n % 10;
		_putchar(s + '0');
	}
	return (s);
}
