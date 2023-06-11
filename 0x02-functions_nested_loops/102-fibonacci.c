#include "main.h"
/**
 * main - main funct
 * Return: 0
 */
int main(void)
{
	int i = 1;
	unsigned long int j = 0, k = 0, l = 1;

	while (i <= 50)
	{
		if (i == 2)
			j = j + i;
		if (i == 1 || i == 2)
			printf("%d, ", i);
		else
		{
			k = j + l;
			if (i != 50)
				printf("%ld, ", k);
			else
				printf("%ld\n", k);
			l = j;
			j = k;
		}
		i++;
	}
	return (0);
}
