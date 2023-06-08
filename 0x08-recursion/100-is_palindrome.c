#include "main.h"
/**
 * is_palindrome_helper - Doing the work of palindome function
 * @s: string from palin
 * @start: to compare
 * @end: to compare
 * Return: the compare
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - seeking space
 * @s: string to compare
 * Return: s
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
