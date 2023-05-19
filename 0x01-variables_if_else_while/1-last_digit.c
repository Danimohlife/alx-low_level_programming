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
	int n, perc;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	perc = n % 10;

	if (perc > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, perc);
	if (perc == 0)
		printf("Last digit of %d is %d and is 0\n", n, perc);
	if (perc < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, perc);

	return (0);
}
