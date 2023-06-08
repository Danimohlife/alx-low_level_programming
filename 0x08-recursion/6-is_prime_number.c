/*int is_prime_number(int n, int divisor);*/
/**
 * isPrime - funct work of prime num
 * @n: main input
 * @divisor: 2
 * Return: 1 / n/div
 */
int isPrime(int n, int divisor)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % divisor == 0)
		return (0);
	if (divisor * divisor > n)
		return (1);
	return (isPrime(n, divisor + 1));
}
/**
 * is_prime_number - funct
 * @n: n int
 * Return: n/2
 */
int is_prime_number(int n)
{
	return (isPrime(n, 2));
}
