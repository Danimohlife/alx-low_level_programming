#include "main.h"
/**
 * main - main 4 all
 * Return: 0 on successs
 */
int main(void)
{
	int previousNum = 1, nextNum;
	int currentNum = 2;
	int sumEven = 0;

	while (currentNum <= 4000000)
	{
		if (currentNum % 2 == 0)
		{
			sumEven += currentNum;
		}

		nextNum = previousNum + currentNum;
		previousNum = currentNum;
		currentNum = nextNum;
	}
	printf("The sum of even-valued terms: %d\n", sumEven);
	return (0);
}
