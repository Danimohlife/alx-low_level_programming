#include <stdio.h>
/**
 * main - 4 main
 * Return: 0 on success
 */
int main(void)
{
	int i, j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j += i;
	}
	printf("%d\n", j);
	return (0);
}
