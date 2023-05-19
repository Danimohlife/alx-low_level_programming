#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - 4 func call
 * Return: 0 on successfull
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int percental = n % 10;

	if (percental > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, percental);
	if (percental == 0)
		printf("The last digit of %d is %d and id 0\n", n, percental);
	if (percental < 6)
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, percental);

	return (0);
}
