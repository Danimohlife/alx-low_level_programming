#include <stdio.h>
/**
 * main - main 4 all
 * Return: 0 on successs
 */
int main(void)
{
	int i;
	long long int j = 0; 

	for (i = 1; i <= 50; i++)
	{
		if (i < 2)
		{
			printf("%d, ", i);
			j = i;
			j += i;
			printf("%d", j);
		}
		printf("%d, ", i);
	}
	printf("\n");
	return (0);
}
