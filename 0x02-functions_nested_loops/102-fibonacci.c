#include "main.h"
/**
 * main - main 4 all
 * Return: 0 on successs
 */
int main(void)
{
	int i;
	unsigned long int j = 1, k = 1, l;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
			printf("%ld, ", j);
		else if (1 == 2)
		{
			k = j + k;
			printf("%ld, ", k);
		}
		else
		{
			l = j + k;
			if (i != 50)
				printf("%ld, ", l);
			else
				printf("%ld", l);
			j = k;
			k = l;
		}

	}
	printf("\n");
	return (0);
}
