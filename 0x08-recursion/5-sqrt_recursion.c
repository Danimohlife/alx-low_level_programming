int _sqrt_recursion_helper(int n, int guess)
{
    if (guess * guess == n)
	    return guess;
    else if (guess * guess > n)
	    return -1;
    else
	    return (_sqrt_recursion_helper(n, guess + 1));
}

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 0));
}
