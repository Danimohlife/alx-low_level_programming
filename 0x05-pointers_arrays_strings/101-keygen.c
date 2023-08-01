#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point for other Function
 * Return: 0 On Successful
 */
int main(void)
{
	srand((time(NULL) % 2) *10);
	int num = rand();
	printf("%d\n", num);
	printf("%d\n", num);
	printf("%d\n", num);
	printf("%d\n", num);
}
