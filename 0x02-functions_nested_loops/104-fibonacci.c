#include "main.h"
/**
 * main - main funct
 * Return: 0
 */
int main(void)
{
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	
	printf("%u, %u", fib1, fib2);
	
	for (int i = 2; i < 98; i++)
	{
		unsigned int fibNext = fib1 + fib2;
		printf(", %u", fibNext);
		
		fib1 = fib2;
		fib2 = fibNext;
	}
	printf("\n");
	return (0);
}
