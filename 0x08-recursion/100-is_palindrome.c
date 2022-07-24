#include "main.h"

/**
 * _strlen_recursion - Find the length of a string.
 * @s: The string to find length of
 * Return: The length
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s != 0)
	{
		l++;
		return ((l + _strlen_recursion(s + 1)));
	}
	return (l);
}

/**
 * pal_check - Actual check for palindrome
 * @s: The string to check
 * @l: Length of string
 *
 * Return: 1 if it is palindrome, 0 if not.
 */

int pal_check(char *s, int l)
{
	if (l <= 1)
		return (1);

	if (*s != s[l - 1])
		return (0);
	else
		return (pal_check((s + 1), (l - 2)));
}

/**
 * is_palindrome - check if a string is a Palindrome
 * @s: The string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l <= 1)
		return (1);

	return (pal_check(s, l));
}
