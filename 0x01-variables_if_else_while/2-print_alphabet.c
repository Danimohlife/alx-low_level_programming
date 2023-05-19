#include <stdio.h>
/**
 * main - funct call func
 * Return: 0 on successfu 
 */
int main(void)
{
	char ch = 'a';

	for (; ch < 'z'; ch++)
	{
		putchar(ch);
		ch++;
	}
	putchar(\n);
	return (0);
}
