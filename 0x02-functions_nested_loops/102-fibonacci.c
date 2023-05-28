#include <stdio.h>
/**
 * main - main 4 all
 * Return: 0 on successs
 */
int main(void)
{
	int i, j = 1;

	for (i = 1; i < 50; i++)
	{
		if (i < 2)
		{
			printf("%d, ", i);
			printf("%d, ", j += i);
		}
		else if (i < 49 && i > 1)
		{
			printf("%d, ", j += i);
		}
		else 
			printf("%d\n", j += i);
	}
	return (0);
}
