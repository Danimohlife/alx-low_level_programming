#include "main.h"
/**
 * main - main 4 all
 * Return: 0 on successs
 */
int main(void)
{
	int previousNum = 1, nextNum;
	int currentNum = 1;
	int sumEven = 0;

	while (currentNum <= 98)
	{
		if (currentNum == 0)
		{
			sumEven += currentNum;
		}

		nextNum = previousNum + currentNum;
		previousNum = currentNum;
		currentNum = nextNum;
	}
	printf("%d\n", sumEven);
	return (0);
}
