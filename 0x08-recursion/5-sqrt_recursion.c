/**
 * _sqrt_recursion_helper - sqrt helper
 * @n: int
 * @guess: helper int
 * Return: -1 / 1
 */
int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, guess + 1));
}
/**
 * _sqrt_recursion - main sqrt
 * @n: like other n
 * Return: cald sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 0));
}
